
@interface SAActivity : NSObject {
    NSBackgroundActivityScheduler * _activity;
    id /* block */  _completionHandler;
    bool  _deferActivity;
}

@property (retain) NSBackgroundActivityScheduler *activity;
@property (copy) id /* block */ completionHandler;
@property bool deferActivity;

+ (id)newWithActivity:(id)arg1 andCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)activity;
- (id /* block */)completionHandler;
- (bool)deferActivity;
- (id)initWithActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActivity:(id)arg1;
- (void)setActivityResult:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeferActivity:(bool)arg1;
- (bool)shouldDefer;

@end
