
@interface BlastDoorAnimatedImageMetadata : NSObject {
    void animatedImageMetadata;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *durations;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) NSString *utTypeString;

- (void).cxx_destruct;
- (id)description;
- (id)durations;
- (id)init;
- (struct CGSize { double x1; double x2; })pixelSize;
- (id)utTypeString;

@end
