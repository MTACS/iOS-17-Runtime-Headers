
@interface CKDDeclineSharesURLRequest : CKDURLRequest {
    id /* block */  _shareDeclinedBlock;
    NSMutableDictionary * _shareMetadataByRequestID;
    NSArray * _shareMetadatasToDecline;
}

@property (nonatomic, copy) id /* block */ shareDeclinedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareMetadataByRequestID;
@property (nonatomic, retain) NSArray *shareMetadatasToDecline;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 shareMetadatasToDecline:(id)arg2;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setShareDeclinedBlock:(id /* block */)arg1;
- (void)setShareMetadataByRequestID:(id)arg1;
- (void)setShareMetadatasToDecline:(id)arg1;
- (id /* block */)shareDeclinedBlock;
- (id)shareMetadataByRequestID;
- (id)shareMetadatasToDecline;
- (id)zoneIDsToLock;

@end
