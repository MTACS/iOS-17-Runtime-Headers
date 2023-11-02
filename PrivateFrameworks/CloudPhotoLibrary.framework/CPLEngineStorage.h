
@interface CPLEngineStorage : NSObject <CPLAbstractObject> {
    CPLEngineStore * _engineStore;
    NSString * _name;
    CPLPlatformObject * _platformObject;
    bool  _shouldBeCreatedDynamically;
    bool  _superWasCalled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineStore *engineStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAlive;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) unsigned long long scopeType;
@property (nonatomic, readonly) bool shouldBeCreatedDynamically;
@property (nonatomic, readonly) bool shouldIncludeInStatus;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (bool)_checkSuperWasCalled;
- (bool)closeWithError:(id*)arg1;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (id)description;
- (id)engineStore;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)isAlive;
- (bool)isEmpty;
- (id)name;
- (bool)openWithError:(id*)arg1;
- (id)platformObject;
- (id)redactedDescription;
- (unsigned long long)scopeType;
- (bool)shouldBeCreatedDynamically;
- (bool)shouldIncludeInStatus;
- (id)status;
- (id)statusDictionary;
- (id)statusPerScopeIndex;
- (bool)testKey:(id)arg1 value:(id)arg2 didHandle:(bool*)arg3 result:(id*)arg4 error:(id*)arg5;
- (void)transactionDidFinish;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
