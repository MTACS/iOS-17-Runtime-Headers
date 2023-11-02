
@interface BookDataStore.CRDTModelSyncEntity : BCCloudData <BCCloudData> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_logger;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, copy) NSData *protoData;
@property (nonatomic, copy) NSString *type;

+ (id)propertyIDKey;

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (id)debugDescription;
- (id)identifier;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(bool)arg2;
- (id)mutableCopy;
- (id)recordType;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (id)zoneName;

@end
