
@interface BlastDoorFileTransferAttribute_ImageInfo : NSObject {
    void fileTransferAttribute_ImageInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (id)description;
- (id)init;
- (struct CGSize { double x1; double x2; })size;

@end
