
@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState {
    _UICompoundObjectMap * _capturedProperties;
}

@property (nonatomic, retain) _UICompoundObjectMap *capturedProperties;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (id)capturedProperties;
- (id)init;
- (void)setCapturedProperties:(id)arg1;

@end
