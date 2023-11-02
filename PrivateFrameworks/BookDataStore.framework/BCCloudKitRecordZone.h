
@interface BCCloudKitRecordZone : NSObject {
    CKRecordZone * _recordZone;
}

@property (nonatomic, readonly) CKRecordZone *recordZone;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRecordZone:(id)arg1;
- (id)recordZone;

@end
