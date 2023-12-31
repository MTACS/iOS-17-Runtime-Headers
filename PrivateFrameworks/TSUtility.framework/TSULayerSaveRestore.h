
@interface TSULayerSaveRestore : NSObject {
    TSURetainedPointerKeyDictionary * _layerStates;
}

@property (nonatomic, retain) TSURetainedPointerKeyDictionary *layerStates;

- (void)dealloc;
- (id)layerStates;
- (id)objectForLayer:(id)arg1 key:(id)arg2;
- (bool)restoreLayer:(id)arg1;
- (void)saveLayer:(id)arg1;
- (void)setLayerStates:(id)arg1;

@end
