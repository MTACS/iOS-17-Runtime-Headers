
@interface PLModelMigratorLog : NSObject {
    NSDateFormatter * _dateFormatter;
}

+ (id)new;
+ (id)openLoggerAtURL:(id)arg1 logRotate:(bool)arg2;
+ (id)setup;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithLogFileURL:(id)arg1 logRotate:(bool)arg2;
- (void)logWithMessage:(const char *)arg1 fromCodeLocation:(struct { char *x1; int x2; })arg2 type:(unsigned char)arg3;

@end
