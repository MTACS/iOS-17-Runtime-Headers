
@interface EDTableStylesCollection : EDCollection {
    NSString * mDefaultPivotStyleName;
    NSString * mDefaultTableStyleName;
}

- (void).cxx_destruct;
- (id)defaultPivotStyle;
- (id)defaultPivotStyleName;
- (id)defaultTableStyle;
- (id)defaultTableStyleName;
- (id)objectWithName:(id)arg1;
- (void)setDefaultPivotStyleName:(id)arg1;
- (void)setDefaultTableStyleName:(id)arg1;

@end
