
@interface SUButtonAction : NSObject {
    bool  _activated;
}

@property (getter=isActivated, nonatomic, readonly) bool activated;

- (void)_buttonAction:(id)arg1;
- (void)_setActivated:(bool)arg1;
- (bool)isActivated;

@end
