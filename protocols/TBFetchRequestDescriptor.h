
@protocol TBFetchRequestDescriptor <NSObject>

@required

- (TBLocalFetchRequestDescriptor *)localFetchDescriptor;
- (PBCodable *)remoteRequest;
- (Class)remoteRequestClass;
- (unsigned long long)type;

@optional

- (TBLocalFetchRequestDescriptor *)preferLocalFetchDescriptor;
- (NSSet *)tileItems;

@end
