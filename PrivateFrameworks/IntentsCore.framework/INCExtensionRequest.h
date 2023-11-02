
@interface INCExtensionRequest : NSObject {
    INWatchdogTimer * _contextTimer;
    NSError * _error;
    NSExtension * _extension;
    NSArray * _extensionInputItems;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _requestIdentifier;
    NSOperationQueue * _requestOperationQueue;
    bool  _requiresTCC;
    bool  _requiresTrustCheck;
}

@property (setter=_setError:, nonatomic, retain) NSError *_error;
@property (setter=_setExtension:, nonatomic, retain) NSExtension *_extension;
@property (nonatomic, retain) NSArray *extensionInputItems;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool requiresTCC;
@property (nonatomic) bool requiresTrustCheck;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_error;
- (id)_extension;
- (id)_extensionContextHost;
- (id)_requestOperationQueue;
- (void)_resetContextTimer;
- (void)_resetExtensionContextHostWithCompletion:(id /* block */)arg1;
- (void)_scheduleContextTimer;
- (void)_setError:(id)arg1;
- (void)_setExtension:(id)arg1;
- (id)extensionInputItems;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)requiresTCC;
- (bool)requiresTrustCheck;
- (void)reset;
- (void)setExtensionInputItems:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiresTCC:(bool)arg1;
- (void)setRequiresTrustCheck:(bool)arg1;
- (void)startRequestForIntent:(id)arg1 completion:(id /* block */)arg2;

@end
