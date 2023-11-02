
@interface TFLogConfiguration : NSObject {
    NSString * _category;
    NSObject<OS_os_log> * _internalLogger;
    NSObject<OS_dispatch_queue> * _internalLoggerAccessQueue;
    NSString * _subsystem;
}

@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly) NSObject<OS_os_log> *generatedLogger;
@property (nonatomic, retain) NSObject<OS_os_log> *internalLogger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalLoggerAccessQueue;
@property (nonatomic, readonly, copy) NSString *subsystem;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)category;
- (id)generatedLogger;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)internalLogger;
- (id)internalLoggerAccessQueue;
- (void)setInternalLogger:(id)arg1;
- (id)subsystem;

@end
