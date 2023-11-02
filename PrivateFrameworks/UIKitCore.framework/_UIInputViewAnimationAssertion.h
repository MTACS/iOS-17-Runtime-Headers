
@interface _UIInputViewAnimationAssertion : NSObject {
    bool  _animated;
    int  _direction;
    UIKeyboardSceneDelegate * _sceneDelegate;
    UIInputViewAnimationStyle * _style;
    bool  _valid;
}

@property (nonatomic) bool animated;
@property (nonatomic, readonly) int direction;
@property (nonatomic) UIKeyboardSceneDelegate *sceneDelegate;
@property (nonatomic, retain) UIInputViewAnimationStyle *style;
@property (nonatomic) bool valid;

+ (id)_assertionWithDirection:(int)arg1 animated:(bool)arg2 sceneDelegate:(id)arg3;

- (void).cxx_destruct;
- (bool)animated;
- (int)direction;
- (void)invalidate;
- (id)sceneDelegate;
- (void)setAnimated:(bool)arg1;
- (void)setSceneDelegate:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setValid:(bool)arg1;
- (id)style;
- (bool)valid;

@end
