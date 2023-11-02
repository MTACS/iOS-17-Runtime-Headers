
@protocol PHImportExceptionRecorder <NSObject>

@required

- (void)addException:(PHImportException *)arg1;
- (PHImportException *)addExceptionWithType:(long long)arg1 path:(NSString *)arg2 underlyingError:(NSError *)arg3 file:(char *)arg4 line:(unsigned long long)arg5;
- (void)addExceptions:(NSArray *)arg1;
- (NSMutableArray *)exceptions;
- (NSString *)logForExceptions;

@end
