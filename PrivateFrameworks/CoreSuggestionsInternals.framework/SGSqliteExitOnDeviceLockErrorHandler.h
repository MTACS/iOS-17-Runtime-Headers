
@interface SGSqliteExitOnDeviceLockErrorHandler : _PASSqliteDefaultErrorHandler {
    int  _exitCode;
}

- (void)exitOnErrorIndicatingIOError:(int)arg1;
- (bool)handleSqliteError:(int)arg1 error:(id)arg2 onError:(id /* block */)arg3 db:(id)arg4;
- (id)initWithExitCode:(int)arg1;

@end
