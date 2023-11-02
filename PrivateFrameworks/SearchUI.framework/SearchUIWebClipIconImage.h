
@interface SearchUIWebClipIconImage : SearchUIAppIconImage {
    UIWebClip * _webClip;
}

@property (nonatomic, retain) UIWebClip *webClip;

+ (id)convertImage:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 withShape:(unsigned long long)arg3 scale:(double)arg4;

- (void).cxx_destruct;
- (id)generateImageWithFormat:(int)arg1 scale:(double)arg2;
- (unsigned long long)hash;
- (id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setWebClip:(id)arg1;
- (id)uniqueIdentifier;
- (id)webClip;

@end
