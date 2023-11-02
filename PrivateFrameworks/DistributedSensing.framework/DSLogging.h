
@interface DSLogging : NSObject {
    NSObject<OS_os_log> * _dsLogger;
}

@property (nonatomic, retain) NSObject<OS_os_log> *dsLogger;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dsLogger;
- (id)init;
- (void)setDsLogger:(id)arg1;

@end
