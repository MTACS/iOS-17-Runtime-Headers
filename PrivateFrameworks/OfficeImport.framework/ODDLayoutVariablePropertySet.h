
@interface ODDLayoutVariablePropertySet : OADProperties {
    int  mDirection;
    bool  mHasDirection;
}

+ (id)defaultProperties;

- (id)description;
- (int)direction;
- (bool)hasDirection;
- (id)initWithDefaults;
- (void)setDirection:(int)arg1;

@end
