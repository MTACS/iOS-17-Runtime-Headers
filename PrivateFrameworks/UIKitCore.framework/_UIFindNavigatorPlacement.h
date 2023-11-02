
@interface _UIFindNavigatorPlacement : NSObject {
    bool  _showing;
}

@property (nonatomic, readonly) _UIFindNavigatorInlinePlacement *inlinePlacement;
@property (nonatomic, readonly) _UIFindNavigatorKeyboardPlacement *keyboardPlacement;
@property (getter=isShowing, nonatomic) bool showing;

- (id)inlinePlacement;
- (bool)isShowing;
- (id)keyboardPlacement;
- (void)setShowing:(bool)arg1;

@end
