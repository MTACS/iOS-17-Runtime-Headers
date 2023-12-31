
@interface FCLoadableFont : NSObject <NSCopying> {
    NSString * _fontName;
    NSURL * _fontURL;
}

@property (nonatomic, copy) NSString *fontName;
@property (nonatomic, retain) NSURL *fontURL;

+ (id)loadableFontWithName:(id)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fontName;
- (id)fontURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontURL:(id)arg1;

@end
