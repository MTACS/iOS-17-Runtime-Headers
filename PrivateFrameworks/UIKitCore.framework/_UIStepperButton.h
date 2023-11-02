
@interface _UIStepperButton : UIButton {
    bool  _left;
}

@property (getter=isLeft, nonatomic) bool left;

+ (Class)_visualProviderClass;

- (id)_systemDefaultFocusGroupIdentifier;
- (bool)isLeft;
- (void)setLeft:(bool)arg1;

@end
