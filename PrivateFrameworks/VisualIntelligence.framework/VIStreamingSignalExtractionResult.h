
@interface VIStreamingSignalExtractionResult : NSObject {
    VIImageRegion * _imageRegion;
    NSData * _payload;
}

@property (nonatomic, readonly) VIImageRegion *imageRegion;
@property (nonatomic, readonly) NSData *payload;

- (void).cxx_destruct;
- (id)imageRegion;
- (id)initWithImageRegion:(id)arg1 payload:(id)arg2;
- (id)payload;

@end
