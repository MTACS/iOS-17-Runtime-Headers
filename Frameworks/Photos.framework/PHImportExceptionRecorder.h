
@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder> {
    NSMutableArray * _exceptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *exceptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addException:(id)arg1;
- (id)addExceptionWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char *)arg4 line:(unsigned long long)arg5;
- (void)addExceptions:(id)arg1;
- (id)exceptions;
- (id)init;
- (void)logErrors;
- (id)logForExceptions;

@end
