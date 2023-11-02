
@interface CNAvatarImageGenerator : NSObject

+ (id)croppedAndCenteredAvatarImageForImage:(id)arg1 scaleMultiplier:(double)arg2;
+ (id)imageDataFromMetadata:(id)arg1;
+ (void)imageDataFromMetadata:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;

@end
