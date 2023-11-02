
@interface CKFetchShareMetadataOperationInfo : CKOperationInfo <NSSecureCoding> {
    bool  _overwriteContainerPCSServiceIfManatee;
    NSArray * _rootRecordDesiredKeys;
    NSDictionary * _shareInvitationTokensByShareURL;
    NSArray * _shareURLsToFetch;
    bool  _shouldFetchRootRecord;
    bool  _skipShareDecryption;
}

@property (nonatomic) bool overwriteContainerPCSServiceIfManatee;
@property (nonatomic, retain) NSArray *rootRecordDesiredKeys;
@property (nonatomic, retain) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic, retain) NSArray *shareURLsToFetch;
@property (nonatomic) bool shouldFetchRootRecord;
@property (nonatomic) bool skipShareDecryption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)overwriteContainerPCSServiceIfManatee;
- (id)rootRecordDesiredKeys;
- (void)setOverwriteContainerPCSServiceIfManatee:(bool)arg1;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setShareInvitationTokensByShareURL:(id)arg1;
- (void)setShareURLsToFetch:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (void)setSkipShareDecryption:(bool)arg1;
- (id)shareInvitationTokensByShareURL;
- (id)shareURLsToFetch;
- (bool)shouldFetchRootRecord;
- (bool)skipShareDecryption;

@end
