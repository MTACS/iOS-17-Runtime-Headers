
@interface MRLogBuffer : NSObject {
    long long  _capacity;
    NSObject<OS_os_log> * _category;
    NSDateFormatter * _dateFormatter;
    NSArray * _history;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _prefix;
}

@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) NSObject<OS_os_log> *category;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSArray *history;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSString *prefix;

+ (id)bufferWithCapacity:(long long)arg1 category:(id)arg2 loggingPrefix:(id)arg3;

- (void).cxx_destruct;
- (long long)capacity;
- (id)category;
- (id)dateFormatter;
- (id)description;
- (id)history;
- (id)initWithCapacity:(long long)arg1 category:(id)arg2 prefix:(id)arg3;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)log:(id)arg1;
- (void)log:(id)arg1 withType:(unsigned char)arg2 capture:(bool)arg3;
- (void)logDebug:(id)arg1;
- (void)logDebugWithoutCapture:(id)arg1;
- (void)logError:(id)arg1;
- (void)logErrorWithInterpolatedString:(id)arg1;
- (void)logErrorWithoutCapture:(id)arg1;
- (void)logFault:(id)arg1;
- (void)logFaultWithoutCapture:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logInfoWithoutCapture:(id)arg1;
- (void)logInterpolatedString:(id)arg1;
- (void)logWithoutCapture:(id)arg1;
- (id)prefix;
- (void)setDateFormatter:(id)arg1;
- (void)setHistory:(id)arg1;

@end
