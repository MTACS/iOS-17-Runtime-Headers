
@interface REMEventKitBridgingDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding> {
    NSArray * _listIDs;
}

@property (nonatomic, readonly) NSArray *listIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithListIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)listIDs;

@end
