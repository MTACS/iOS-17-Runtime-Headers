
@interface BlastDoorLargeImage : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  largeImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMachImage *image;
@property (nonatomic, readonly) BlastDoorMediaMetadata *metadata;

- (void).cxx_destruct;
- (id)description;
- (id)image;
- (id)init;
- (id)metadata;

@end
