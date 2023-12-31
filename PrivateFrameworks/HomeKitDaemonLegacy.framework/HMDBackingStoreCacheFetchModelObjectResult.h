
@interface HMDBackingStoreCacheFetchModelObjectResult : HMFObject {
    HMDBackingStoreModelObject * _object;
    CKRecord * _record;
}

@property (nonatomic, readonly) HMDBackingStoreModelObject *object;
@property (nonatomic, readonly) CKRecord *record;

- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 data:(id)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4;
- (id)object;
- (id)record;

@end
