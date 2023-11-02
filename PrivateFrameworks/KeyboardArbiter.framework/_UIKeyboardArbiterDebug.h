
@interface _UIKeyboardArbiterDebug : NSObject {
    bool  _disable;
    NSMutableArray * _entries;
    int  _importantCount;
    bool  _pause;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool pause;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addAsynchronousData:(id /* block */)arg1;
- (void)addEntry:(id)arg1;
- (void)debugWithMessage:(id)arg1;
- (void)errorWithMessage:(id)arg1;
- (void)getDebugInfoDictionariesWithCompletionHandler:(id /* block */)arg1;
- (void)infoWithMessage:(id)arg1;
- (id)init;
- (bool)pause;
- (void)setPause:(bool)arg1;

@end
