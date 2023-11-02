
@interface HDVerifiableClinicalRecordQueryServer : HDQueryServer {
    NSArray * _recordTypes;
    NSArray * _sourceTypes;
}

@property (nonatomic, readonly) NSArray *recordTypes;
@property (nonatomic, readonly) NSArray *sourceTypes;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)recordTypes;
- (id)sourceTypes;

@end
