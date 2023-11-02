
@interface WFCloudKitItemRecord : NSObject {
    <WFCloudKitItem> * _item;
    CKRecord * _record;
}

@property (nonatomic, readonly) <WFCloudKitItem> *item;
@property (nonatomic, readonly) CKRecord *record;

- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 item:(id)arg2;
- (id)item;
- (id)record;

@end
