
@interface WFSplitScreenAppAction : WFAction {
    NSMutableDictionary * _leftWindowsToWindowID;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _rightWindowsToWindowID;
}

@property (nonatomic, retain) NSMutableDictionary *leftWindowsToWindowID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *rightWindowsToWindowID;

- (void).cxx_destruct;
- (id)disabledOnPlatforms;
- (id)leftWindowsToWindowID;
- (id)queue;
- (id)rightWindowsToWindowID;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setLeftWindowsToWindowID:(id)arg1;
- (void)setRightWindowsToWindowID:(id)arg1;

@end
