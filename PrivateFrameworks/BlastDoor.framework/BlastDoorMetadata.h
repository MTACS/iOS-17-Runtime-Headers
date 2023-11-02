
@interface BlastDoorMetadata : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metadata;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_timestamp;
@property (nonatomic, readonly) NSUUID *messageGUID;
@property (nonatomic, readonly) BlastDoorMetadata_StorageContext *storageContext;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) bool wantsCheckpointing;
@property (nonatomic, readonly) bool wantsDeliveryReceipt;

- (void).cxx_destruct;
- (id)description;
- (bool)has_timestamp;
- (id)init;
- (id)messageGUID;
- (id)storageContext;
- (unsigned long long)timestamp;
- (bool)wantsCheckpointing;
- (bool)wantsDeliveryReceipt;

@end
