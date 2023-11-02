
@interface BLSHTailspinLogWriter : NSObject {
    id /* block */  _completion;
    NSString * _reason;
}

+ (bool)isTailspinAvailable;

- (void).cxx_destruct;
- (void)_finish:(bool)arg1;
- (id)_tailspinFilesDirectory;
- (id)initWithReason:(id)arg1;
- (void)writeTailspinLogWithCompletion:(id /* block */)arg1;

@end
