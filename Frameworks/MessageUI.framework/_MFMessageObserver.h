
@interface _MFMessageObserver : NSObject {
    NSMutableDictionary * _completionMap;
}

+ (void)invokeCompletionForMessageGUID:(id)arg1 didSend:(bool)arg2;
+ (void)observeMessageGUID:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeCompletionForMessageGUID:(id)arg1;
+ (id)sharedObserver;

- (void).cxx_destruct;
- (id)init;
- (void)invokeCompletionForMessageGUID:(id)arg1 didSend:(bool)arg2;
- (void)observeMessageGUID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeCompletionForMessageGUID:(id)arg1;

@end
