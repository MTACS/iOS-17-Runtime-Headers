
@interface FigDisplayMirroringChangeObserver : NSObject {
    NSArray * _baseDisplayList;
    int (* _callback;
    NSMutableSet * _clonedDisplays;
    NSMutableSet * _cloningSupportedDisplays;
    bool  _needToRemoveObserversOnCADisplays;
    struct OpaqueFigPlayer { } * _player;
    struct OpaqueFigCFWeakReferenceHolder { } * _weakCallbackContext;
}

- (void)dealloc;
- (id)init;
- (id)initWithCallback:(int (*)arg1 context:(void*)arg2;
- (id)initWithPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeCallback;
- (void)removeObserversOnCADisplays;
- (void)removeReferenceToPlayer;
- (void)setBaseDisplayList:(id)arg1;
- (void)updatePlayerDisplayList;

@end
