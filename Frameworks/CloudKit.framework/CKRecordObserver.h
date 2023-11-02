
@interface CKRecordObserver : NSObject <CKPropertiesDescription, NSCopying> {
    CKContainerSetupInfo * _containerInfo;
    <CKRecordObservable> * _provider;
    NSString * _recordType;
}

@property (nonatomic, readonly, copy) CKContainerSetupInfo *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CKRecordObservable> *provider;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)containerInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithContainer:(id)arg1 recordType:(id)arg2;
- (id)initWithContainerInfo:(id)arg1 recordType:(id)arg2 provider:(id)arg3;
- (void)invalidate;
- (id)provider;
- (id)recordType;
- (id)redactedDescription;
- (void)registerWithBlock:(id /* block */)arg1;

@end
