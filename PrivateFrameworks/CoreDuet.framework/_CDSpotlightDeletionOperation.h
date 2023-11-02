
@interface _CDSpotlightDeletionOperation : NSObject <BMStoreData, NSSecureCoding> {
    NSString * _bundleId;
    id /* block */  _completion;
    NSString * _deletionType;
    NSSet * _domainIdentifiers;
    NSSet * _itemIdentifiers;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deletionForEventsWithDomainIdentifiers:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
+ (id)deletionForEventsWithItemIdentifiers:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeletionType:(id)arg1 bundleId:(id)arg2 itemIdentifiers:(id)arg3 domainIdentifiers:(id)arg4 completion:(id /* block */)arg5;
- (id)serialize;

@end
