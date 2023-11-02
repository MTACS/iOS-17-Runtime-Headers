
@interface MPModelStoreBrowseRoomRequest : MPStoreModelRequest {
    NSURL * _loadAdditionalContentURL;
    MPModelStoreBrowseResponse * _previousResponse;
    MPModelStoreBrowseResponse * _previousRetrievedNestedResponse;
    NSString * _roomID;
}

@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previousResponse;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;
@property (nonatomic, copy) NSString *roomID;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)configureWithParentSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadAdditionalContentURL;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)previousResponse;
- (id)previousRetrievedNestedResponse;
- (id)roomID;
- (void)setLoadAdditionalContentURL:(id)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setPreviousRetrievedNestedResponse:(id)arg1;
- (void)setRoomID:(id)arg1;

@end
