
@interface SXOEmbedPhotoResponse : SXOEmbedResponse

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double width;

- (struct CGSize { double x1; double x2; })size;

@end
