
@interface STUIStatusBarPersistentAnimationView : UIView {
    NSHashTable * _animations;
}

@property (nonatomic, retain) NSHashTable *animations;
@property (nonatomic, copy) NSArray *persistentAnimations;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)animations;
- (id)persistentAnimations;
- (void)setAnimations:(id)arg1;
- (void)setPersistentAnimations:(id)arg1;

@end
