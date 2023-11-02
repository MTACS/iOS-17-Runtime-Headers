
@interface DIDiskArb : NSObject {
    bool  _callbackReached;
    struct __DASession { } * _daSession;
    <DIDisappearedMountPointDelegate> * _delegate;
    NSURL * _inputMountedOnURL;
    NSError * _operationError;
    NSArray * _shadowMountedOnURLs;
}

@property bool callbackReached;
@property (nonatomic) struct __DASession { }*daSession;
@property (nonatomic) <DIDisappearedMountPointDelegate> *delegate;
@property (nonatomic, copy) NSURL *inputMountedOnURL;
@property (nonatomic, retain) NSError *operationError;
@property (nonatomic, copy) NSArray *shadowMountedOnURLs;

+ (id)diskArbWithError:(id*)arg1;

- (void).cxx_destruct;
- (void)addDisappearedCallbackWithMountPoint:(id)arg1 shadowMountPoints:(id)arg2 delegate:(id)arg3;
- (bool)callbackReached;
- (id)copyDescriptionWithBSDName:(id)arg1;
- (struct __DASession { }*)daSession;
- (void)dealloc;
- (id)delegate;
- (bool)ejectWithBSDName:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (id)inputMountedOnURL;
- (void)onDiskDisappearedWithDisk:(struct __DADisk { }*)arg1;
- (id)operationError;
- (void)setCallbackReached:(bool)arg1;
- (void)setDaSession:(struct __DASession { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputMountedOnURL:(id)arg1;
- (void)setOperationError:(id)arg1;
- (void)setShadowMountedOnURLs:(id)arg1;
- (id)shadowMountedOnURLs;
- (bool)unmountWithMountPoint:(id)arg1 error:(id*)arg2;
- (bool)waitForDAIdleWithError:(id*)arg1;

@end
