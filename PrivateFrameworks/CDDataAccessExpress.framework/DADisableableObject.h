
@interface DADisableableObject : NSObject {
    bool  _isDisabled;
}

@property (nonatomic) bool isDisabled;

- (void)disable;
- (bool)isDisabled;
- (void)setIsDisabled:(bool)arg1;

@end
