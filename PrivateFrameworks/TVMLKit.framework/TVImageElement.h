
@interface TVImageElement : TVViewElement

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) NSDictionary *srcset;

- (id)URL;
- (struct CGSize { double x1; double x2; })imageScaleToSize;
- (long long)imageType;
- (id)srcset;

@end
