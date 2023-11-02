
@interface FCAVAssetDownload : NSObject <FCOperationCanceling, FCOperationIdentifying> {
    NSString * _assetID;
    NSMutableArray * _completionHandlers;
    <FCOperationCanceling><FCOperationIdentifying> * _underlyingOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *longOperationDescription;
@property (nonatomic, readonly) NSString *shortOperationDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)longOperationDescription;
- (id)shortOperationDescription;

@end
