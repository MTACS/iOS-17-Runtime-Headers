
@interface HKCloudSyncRequest : NSObject <NSCopying, NSSecureCoding> {
    HKChangesSyncRequest * _changesSyncRequest;
    HKContextSyncRequest * _contextSyncRequest;
    NSUUID * _identifier;
    HKStateSyncRequest * _stateSyncRequest;
}

@property (nonatomic, copy) HKChangesSyncRequest *changesSyncRequest;
@property (nonatomic, copy) HKContextSyncRequest *contextSyncRequest;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) HKStateSyncRequest *stateSyncRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changesSyncRequest;
- (id)contextSyncRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeRequest:(id)arg1;
- (id)requestWithChangesSyncRequest:(id)arg1;
- (id)requestWithContextSyncRequest:(id)arg1;
- (id)requestWithStateSyncRequest:(id)arg1;
- (void)setChangesSyncRequest:(id)arg1;
- (void)setContextSyncRequest:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStateSyncRequest:(id)arg1;
- (id)stateSyncRequest;

@end
