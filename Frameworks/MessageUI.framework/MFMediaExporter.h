
@interface MFMediaExporter : NSObject

+ (id)conversionTimers;
+ (int)exportAsset:(id)arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)jpegRepresentationForImageData:(id)arg1 inputContentType:(id)arg2 completion:(id /* block */)arg3;
+ (id)log;
+ (void)setConversionTimers:(id)arg1;

@end
