
@interface FBSWorkspaceInitializationOptions : NSObject {
    FBSSerialQueue * _callOutQueue;
    <FBSWorkspaceDelegate> * _delegate;
    bool  _startsInactive;
}

@property (setter=_setStartsInactive:, nonatomic) bool _startsInactive;
@property (nonatomic, retain) FBSSerialQueue *callOutQueue;
@property (nonatomic, readonly) <FBSWorkspaceDelegate> *delegate;

+ (id)optionsWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDelegate:(id)arg1;
- (void)_setStartsInactive:(bool)arg1;
- (bool)_startsInactive;
- (id)callOutQueue;
- (id)delegate;
- (id)init;
- (void)setCallOutQueue:(id)arg1;

@end
