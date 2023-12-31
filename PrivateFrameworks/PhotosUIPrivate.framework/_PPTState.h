
@interface _PPTState : NSObject {
    int  _enteredCount;
    NSObject<OS_dispatch_group> * _group;
    bool  _hasRendered;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _renderStatistics;
}

@property bool hasRendered;
@property (retain) NSMutableArray *renderStatistics;

- (void).cxx_destruct;
- (void)enterDispatchGroup;
- (void)groupNotifyOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)hasRendered;
- (id)init;
- (void)leaveDispatchGroup;
- (id)renderStatistics;
- (void)setHasRendered:(bool)arg1;
- (void)setRenderStatistics:(id)arg1;

@end
