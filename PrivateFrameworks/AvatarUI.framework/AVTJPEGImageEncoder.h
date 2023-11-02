
@interface AVTJPEGImageEncoder : NSObject <AVTImageEncoder> {
    double  _compressionQuality;
}

@property (nonatomic, readonly) double compressionQuality;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)compressionQuality;
- (id)dataFromImage:(id)arg1;
- (id)fileExtension;
- (id)imageFromData:(id)arg1 error:(id*)arg2;
- (id)imageFromURL:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithCompressionQuality:(double)arg1;

@end
