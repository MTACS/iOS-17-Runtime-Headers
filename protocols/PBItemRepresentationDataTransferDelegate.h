
@protocol PBItemRepresentationDataTransferDelegate <NSObject>

@required

- (void)itemRepresentation:(PBItemRepresentation *)arg1 beganDataTransferWithProgress:(NSProgress *)arg2;
- (void)itemRepresentationFinishedDataTransfer:(PBItemRepresentation *)arg1;

@end
