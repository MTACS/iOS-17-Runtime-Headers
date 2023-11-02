
@interface _CNTimeProfilingTaskOSLogger : NSObject <CNTaskTimeProfileLogging> {
    NSObject<OS_os_log> * _os_log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_os_log> *os_log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithOSLog:(id)arg1;
- (id)os_log;
- (void)task:(id)arg1 didCompleteAfter:(double)arg2;
- (void)task:(id)arg1 didFailWithError:(id)arg2 after:(double)arg3;
- (void)taskWillBegin:(id)arg1;

@end
