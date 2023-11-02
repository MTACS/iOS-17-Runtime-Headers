
@interface AVTStickerImageEncoder : NSObject <AVTClippableImageEncoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dataFromImage:(id)arg1;
- (id)dataFromImage:(id)arg1 clippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)fileExtension;
- (id)imageFromData:(id)arg1 error:(id*)arg2;
- (id)imageFromURL:(id)arg1 error:(id*)arg2;

@end
