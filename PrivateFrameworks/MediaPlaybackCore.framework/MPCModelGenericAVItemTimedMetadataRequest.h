
@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest {
    MPModelGenericObject * _genericObject;
    MPCModelGenericAVItemTimedMetadataResponse * _previousResponse;
    ICStoreRequestContext * _storeRequestContext;
    NSArray * _timedMetadataGroups;
}

@property (nonatomic, readonly) MPModelGenericObject *genericObject;
@property (nonatomic, retain) MPCModelGenericAVItemTimedMetadataResponse *previousResponse;
@property (nonatomic, readonly, copy) ICStoreRequestContext *storeRequestContext;
@property (nonatomic, readonly, copy) NSArray *timedMetadataGroups;

+ (id)metadataIdentifiers;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genericObject;
- (id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)previousResponse;
- (void)setPreviousResponse:(id)arg1;
- (id)storeRequestContext;
- (id)timedMetadataGroups;

@end
