
@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {
    NSData * _adamIDData;
    bool  _finalResponse;
    bool  _firstResponse;
    MPModelResponse * _personalizationResponse;
    MPCModelGenericAVItemTimedMetadataStreamFields * _streamFields;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
}

@property (nonatomic, copy) NSData *adamIDData;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (getter=isFirstResponse, nonatomic) bool firstResponse;
@property (nonatomic, retain) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields;
@property (nonatomic, copy) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (id)adamIDData;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 firstResponse:(bool)arg3 finalResponse:(bool)arg4;
- (bool)isFinalResponse;
- (bool)isFirstResponse;
- (void)setAdamIDData:(id)arg1;
- (void)setFinalResponse:(bool)arg1;
- (void)setFirstResponse:(bool)arg1;
- (void)setStreamFields:(id)arg1;
- (void)setUnpersonalizedContentDescriptors:(id)arg1;
- (id)streamFields;
- (id)unpersonalizedContentDescriptors;

@end
