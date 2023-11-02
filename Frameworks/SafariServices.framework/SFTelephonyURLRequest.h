
@interface SFTelephonyURLRequest : NSObject {
    id /* block */  _completionHandler;
    NSString * _failureNotificationName;
    NSString * _successNotificationName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *failureNotificationName;
@property (nonatomic, retain) NSString *successNotificationName;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)failureNotificationName;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFailureNotificationName:(id)arg1;
- (void)setSuccessNotificationName:(id)arg1;
- (id)successNotificationName;

@end
