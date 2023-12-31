
@interface CoreThemeConstantHelper : NSObject {
    NSString * _displayName;
    unsigned long long  _identifier;
    NSString * _label;
}

+ (id)helperForStructAtIndex:(long long)arg1 inAssociatedGlobalList:(void*)arg2;

- (void)dealloc;
- (id)description;
- (id)displayName;
- (long long)identifier;
- (id)label;

@end
