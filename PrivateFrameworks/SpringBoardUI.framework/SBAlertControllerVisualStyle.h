
@interface SBAlertControllerVisualStyle : UIAlertControllerVisualStyleAlert {
    long long  _permittedActionLayoutDirection;
}

@property (nonatomic) long long permittedActionLayoutDirection;

- (id)init;
- (long long)permittedActionLayoutDirection;
- (void)setPermittedActionLayoutDirection:(long long)arg1;

@end
