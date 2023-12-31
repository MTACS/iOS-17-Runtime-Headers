
@interface TCImportFontCache : NSObject {
    OITSUNoCopyDictionary * mFontCache;
    NSMutableDictionary * mFontNameCache;
}

@property (nonatomic, readonly) NSMutableDictionary *fontNameCache;

+ (struct CGSize { double x1; double x2; })stringSizeForText:(id)arg1 ctFontRef:(struct __CTFont { }*)arg2;

- (void).cxx_destruct;
- (struct __CTFont { }*)ctFontRefForKey:(id)arg1;
- (void)dealloc;
- (id)fontNameCache;
- (struct __CTFont { }*)fontRefForFontName:(id)arg1 size:(int)arg2;
- (id)init;
- (struct CGSize { double x1; double x2; })stringSizeForSpaceWithFontName:(id)arg1 fontSize:(int)arg2;
- (struct CGSize { double x1; double x2; })stringSizeForText:(id)arg1 fontName:(id)arg2 fontSize:(int)arg3;

@end
