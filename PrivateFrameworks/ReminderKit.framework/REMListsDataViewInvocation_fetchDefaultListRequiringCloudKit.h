
@interface REMListsDataViewInvocation_fetchDefaultListRequiringCloudKit : REMStoreInvocation <NSSecureCoding> {
    REMObjectID * _accountObjectID;
    bool  _debug_useInMemoryPreferredDefaultListStorage;
}

@property (nonatomic, readonly) REMObjectID *accountObjectID;
@property (nonatomic) bool debug_useInMemoryPreferredDefaultListStorage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountObjectID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)debug_useInMemoryPreferredDefaultListStorage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountObjectID:(id)arg1 debugUseInMemoryPreferredDefaultListStorage:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDebug_useInMemoryPreferredDefaultListStorage:(bool)arg1;

@end
