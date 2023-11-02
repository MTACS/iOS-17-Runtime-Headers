
@interface SearchUIClockImage : SearchUIAppIconImage

@property (retain) SFClockImage *sfImage;

- (id)initWithClockImage:(id)arg1 variant:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
