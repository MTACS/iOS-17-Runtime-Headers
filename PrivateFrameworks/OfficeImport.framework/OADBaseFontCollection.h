
@interface OADBaseFontCollection : NSObject {
    NSString * _complexScriptFont;
    NSString * _eastAsianFont;
    NSString * _latinFont;
}

@property (nonatomic, copy) NSString *complexScriptFont;
@property (nonatomic, copy) NSString *eastAsianFont;
@property (nonatomic, copy) NSString *latinFont;

- (void).cxx_destruct;
- (id)baseFontForId:(int)arg1;
- (id)complexScriptFont;
- (id)eastAsianFont;
- (bool)isEmpty;
- (bool)isEqualToBaseFontCollection:(id)arg1;
- (id)latinFont;
- (void)setBaseFont:(id)arg1 forId:(int)arg2;
- (void)setComplexScriptFont:(id)arg1;
- (void)setEastAsianFont:(id)arg1;
- (void)setLatinFont:(id)arg1;

@end
