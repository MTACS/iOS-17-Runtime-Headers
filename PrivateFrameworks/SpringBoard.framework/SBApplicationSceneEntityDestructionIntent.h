
@interface SBApplicationSceneEntityDestructionIntent : NSObject {
    unsigned long long  _animation;
    bool  _shouldRemoveFromHistory;
}

@property (nonatomic) unsigned long long animation;
@property (nonatomic) bool shouldRemoveFromHistory;

- (unsigned long long)animation;
- (void)setAnimation:(unsigned long long)arg1;
- (void)setShouldRemoveFromHistory:(bool)arg1;
- (bool)shouldRemoveFromHistory;

@end
