
@interface BSUIFontProvider : NSObject {
    bool  _isDefault;
}

+ (id)defaultFontProvider;
+ (id)preferredFontProvider;

- (id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
- (id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3;

@end
