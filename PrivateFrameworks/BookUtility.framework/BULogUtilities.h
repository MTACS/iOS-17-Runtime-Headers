
@interface BULogUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _buVerboseLoggingEnabled;
    NSUserDefaults * _defaults;
    NSString * _keyPath;
}

@property (nonatomic) bool buVerboseLoggingEnabled;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) NSString *keyPath;

+ (id)shared;

- (void).cxx_destruct;
- (bool)buVerboseLoggingEnabled;
- (void)dealloc;
- (id)defaults;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 keyPath:(id)arg2;
- (id)keyPath;
- (void)observeDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setBuVerboseLoggingEnabled:(bool)arg1;
- (void)setDefaults:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (bool)verboseLoggingEnabled;

@end
