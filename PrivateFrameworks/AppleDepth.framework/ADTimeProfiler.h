
@interface ADTimeProfiler : NSObject {
    NSMutableArray * _logArray;
}

@property (nonatomic, retain) NSMutableArray *logArray;

+ (unsigned long long)currentTimeUsec;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)log;
- (id)logArray;
- (void)printLog;
- (void)reset;
- (void)setLogArray:(id)arg1;
- (void)start:(id)arg1;
- (void)startForOperationWithName:(id)arg1;
- (void)startWithUTFString:(const char *)arg1;
- (void)stop:(id)arg1;
- (void)stopForOperationWithName:(id)arg1;
- (void)stopWithUTFString:(const char *)arg1;
- (id)stringLog;
- (id)valueDictForOperationName:(id)arg1;

@end
