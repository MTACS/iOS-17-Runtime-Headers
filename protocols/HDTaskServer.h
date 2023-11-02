
@protocol HDTaskServer <_HKXPCExportable>

@required

+ (NSArray *)requiredEntitlements;
+ (NSString *)taskIdentifier;

- (id)initWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4;
- (NSUUID *)taskUUID;

@optional

+ (Class)configurationClass;
+ (<HDTaskServer> *)createTaskServerWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4 error:(id*)arg5;
+ (bool)validateClient:(HDHealthStoreClient *)arg1 error:(id*)arg2;
+ (bool)validateConfiguration:(HKTaskConfiguration *)arg1 client:(HDHealthStoreClient *)arg2 error:(id*)arg3;

@end
