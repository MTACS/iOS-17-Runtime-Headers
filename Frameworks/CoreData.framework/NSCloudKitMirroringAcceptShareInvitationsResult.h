
@interface NSCloudKitMirroringAcceptShareInvitationsResult : NSCloudKitMirroringResult {
    NSArray * _acceptedShareMetadatas;
    NSArray * _acceptedShares;
}

@property (nonatomic, retain) NSArray *acceptedShareMetadatas;
@property (nonatomic, retain) NSArray *acceptedShares;

- (id)acceptedShareMetadatas;
- (id)acceptedShares;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 storeIdentifier:(id)arg2 acceptedShares:(id)arg3 acceptedShareMetadatas:(id)arg4 error:(id)arg5;
- (void)setAcceptedShareMetadatas:(id)arg1;
- (void)setAcceptedShares:(id)arg1;

@end
