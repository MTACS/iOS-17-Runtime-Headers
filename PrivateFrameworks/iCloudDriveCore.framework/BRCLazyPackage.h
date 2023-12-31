
@interface BRCLazyPackage : NSObject {
    NSString * _name;
    CKPackage * _package;
    BRCStageRegistry * _registry;
    NSString * _stageID;
}

- (void).cxx_destruct;
- (bool)addItem:(id)arg1 error:(id*)arg2;
- (id)closeAndReturn;
- (id)initWithRegistry:(id)arg1 stageID:(id)arg2 name:(id)arg3;
- (unsigned long long)itemCount;

@end
