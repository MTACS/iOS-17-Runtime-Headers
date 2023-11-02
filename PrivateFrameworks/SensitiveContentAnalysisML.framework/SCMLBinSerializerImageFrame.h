
@interface SCMLBinSerializerImageFrame : NSObject {
    NSData * _imageData;
    NSString * _recordID;
}

@property (retain) NSData *imageData;
@property (retain) NSString *recordID;

- (void).cxx_destruct;
- (struct CGImage { }*)cgImage;
- (id)ciImage;
- (id)data;
- (id)imageData;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)name;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(id)arg1;
- (id)recordID;
- (void)setImageData:(id)arg1;
- (void)setRecordID:(id)arg1;

@end
