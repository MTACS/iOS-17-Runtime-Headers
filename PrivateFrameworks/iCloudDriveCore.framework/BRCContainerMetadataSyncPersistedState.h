
@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState {
    CKOperationGroup * _ckGroup;
    bool  _hasCaughtUpAtLeastOnce;
    NSDate * _lastSyncDownDate;
    bool  _needsContainerMetadataSyncDown;
    bool  _needsSharedDBSyncDown;
    unsigned long long  _requestID;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic, retain) CKOperationGroup *ckGroup;
@property (nonatomic) bool hasCaughtUpAtLeastOnce;
@property (nonatomic, readonly) NSDate *lastSyncDownDate;
@property (nonatomic) bool needsContainerMetadataSyncDown;
@property (nonatomic) bool needsSharedDBSyncDown;
@property (nonatomic, readonly) unsigned long long requestID;
@property (nonatomic, readonly) CKServerChangeToken *serverChangeToken;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)allocateNextRequestID;
- (id)ckGroup;
- (void)containerMetadataWasReset;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCaughtUpAtLeastOnce;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastSyncDownDate;
- (bool)needsContainerMetadataSyncDown;
- (bool)needsSharedDBSyncDown;
- (unsigned long long)requestID;
- (id)serverChangeToken;
- (void)setCkGroup:(id)arg1;
- (void)setHasCaughtUpAtLeastOnce:(bool)arg1;
- (void)setNeedsContainerMetadataSyncDown:(bool)arg1;
- (void)setNeedsSharedDBSyncDown:(bool)arg1;
- (void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;

@end
