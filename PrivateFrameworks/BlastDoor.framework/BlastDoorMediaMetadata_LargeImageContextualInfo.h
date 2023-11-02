
@interface BlastDoorMediaMetadata_LargeImageContextualInfo : NSObject {
    void mediaMetadata_LargeImageContextualInfo;
}

@property (nonatomic, readonly) long long bufferByteSize;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long pixelHeight;
@property (nonatomic, readonly) long long pixelWidth;

- (long long)bufferByteSize;
- (id)description;
- (id)init;
- (long long)pixelHeight;
- (long long)pixelWidth;

@end
