
@interface SCLSchoolModeConfiguration : NSObject <NSCopying> {
    <SCLSchoolModeDelegate> * _delegate;
    NSString * _identifier;
    bool  _loadsSynchronously;
    NSUUID * _pairingID;
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSXPCListenerEndpoint * _testingEndpoint;
}

@property (nonatomic) <SCLSchoolModeDelegate> *delegate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool loadsSynchronously;
@property (nonatomic, copy) NSUUID *pairingID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, retain) NSXPCListenerEndpoint *testingEndpoint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)identifier;
- (id)init;
- (bool)loadsSynchronously;
- (id)pairingID;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLoadsSynchronously:(bool)arg1;
- (void)setPairingID:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setTestingEndpoint:(id)arg1;
- (id)targetQueue;
- (id)testingEndpoint;

@end
