
@interface BRCZoneHealthSyncPersistedState : BRCPersistedState {
    CKOperationGroup * _ckGroup;
    NSDate * _lastSyncDownDate;
    bool  _needsSyncDown;
    unsigned long long  _requestID;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic, retain) CKOperationGroup *ckGroup;
@property (readonly) NSDate *lastSyncDownDate;
@property (nonatomic) bool needsSyncDown;
@property (nonatomic, readonly) unsigned long long requestID;
@property (nonatomic, readonly) CKServerChangeToken *serverChangeToken;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)allocateNextRequestID;
- (id)ckGroup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneHealthState:(id)arg1;
- (id)lastSyncDownDate;
- (bool)needsSyncDown;
- (unsigned long long)requestID;
- (id)serverChangeToken;
- (void)setCkGroup:(id)arg1;
- (void)setNeedsSyncDown:(bool)arg1;
- (void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (void)zoneHealthWasReset;

@end
