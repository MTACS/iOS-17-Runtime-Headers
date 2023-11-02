
@interface BWLearnedNROutput : NSObject {
    NSMutableDictionary * _metadata;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, retain) NSMutableDictionary *metadata;
@property (nonatomic, retain) struct __CVBuffer { }*pixelBuffer;

- (void)dealloc;
- (id)metadata;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setMetadata:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
