
@interface CKDAcceptSharesURLRequest : CKDURLRequest {
    id /* block */  _shareAcceptedBlock;
    NSMutableDictionary * _shareMetadataByRequestID;
    NSArray * _shareMetadatasToAccept;
}

@property (nonatomic, copy) id /* block */ shareAcceptedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareMetadataByRequestID;
@property (nonatomic, retain) NSArray *shareMetadatasToAccept;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 shareMetadatasToAccept:(id)arg2;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresCKAnonymousSignature;
- (bool)requiresCKAnonymousUserIDs;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)arg1 dataToBeSigned:(id)arg2 error:(id*)arg3;
- (void)setShareAcceptedBlock:(id /* block */)arg1;
- (void)setShareMetadataByRequestID:(id)arg1;
- (void)setShareMetadatasToAccept:(id)arg1;
- (id /* block */)shareAcceptedBlock;
- (id)shareMetadataByRequestID;
- (id)shareMetadatasToAccept;
- (id)zoneIDsToLock;

@end
