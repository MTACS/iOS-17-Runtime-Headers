
@protocol PBItemCollectionDataTransferDelegate <NSObject>

@required

- (void)itemCollection:(PBItemCollection *)arg1 item:(PBItem *)arg2 representation:(PBItemRepresentation *)arg3 beganDataTransferWithProgress:(NSProgress *)arg4;
- (void)itemCollection:(PBItemCollection *)arg1 item:(PBItem *)arg2 representationFinishedDataTransfer:(PBItemRepresentation *)arg3;

@end
