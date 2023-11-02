
@interface FSModuleExtension : _EXExtension {
    NSString * _bundleID;
    NSMutableArray * _connectors;
    bool  _delegateConformantFS;
    NSUUID * _instanceUUID;
    bool  _isFSSubclass;
    bool  _isNormalFS;
    bool  _isSimpleFS;
    bool  _isSimpleFSSubclass;
    bool  _supportsBlockOps;
    bool  _supportsServerOps;
    NSMutableDictionary * _taskSet;
}

@property (readonly) NSString *bundleID;
@property (readonly) NSMutableArray *connectors;
@property (readonly) bool delegateConformantFS;
@property (retain) NSUUID *instanceUUID;
@property (readonly) bool isFSSubclass;
@property (readonly) bool isNormalFS;
@property (readonly) bool isSimpleFS;
@property (readonly) bool isSimpleFSSubclass;
@property (readonly) bool supportsBlockOps;
@property (readonly) bool supportsServerOps;
@property (retain) NSMutableDictionary *taskSet;

- (void).cxx_destruct;
- (id)bundleID;
- (id)connectors;
- (bool)delegateConformantFS;
- (void)didFinishLaunching;
- (id)instanceUUID;
- (bool)isFSSubclass;
- (bool)isNormalFS;
- (bool)isSimpleFS;
- (bool)isSimpleFSSubclass;
- (void)sendWipeResource:(id)arg1 includingBlockRanges:(id)arg2 excludingBlockRanges:(id)arg3 reply:(id /* block */)arg4;
- (void)setInstanceUUID:(id)arg1;
- (void)setTaskSet:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (bool)supportsBlockOps;
- (bool)supportsServerOps;
- (id)taskSet;

@end
