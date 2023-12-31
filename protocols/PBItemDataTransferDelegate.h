
@protocol PBItemDataTransferDelegate <NSObject>

@required

- (void)item:(PBItem *)arg1 representation:(PBItemRepresentation *)arg2 beganDataTransferWithProgress:(NSProgress *)arg3;
- (void)item:(PBItem *)arg1 representationFinishedDataTransfer:(PBItemRepresentation *)arg2;

@end
