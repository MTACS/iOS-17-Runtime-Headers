
@interface PhotosControlCommand : NSObject {
    NSArray * _args;
    NSString * _invokedName;
}

+ (id)abbreviations;
+ (struct option { char *x1; int x2; int *x3; int x4; }*)longopts;
+ (long long)maximumArgs;
+ (long long)minimumArgs;
+ (id)name;
+ (const char *)optstring;
+ (id)usage;
+ (id)usagesummary;

- (void).cxx_destruct;
- (id)args;
- (id)dataForPathOrStdin:(id)arg1;
- (id)description;
- (id)formatDuration:(double)arg1;
- (id)init;
- (id)initWithArgc:(int)arg1 argv:(char **)arg2;
- (id)invokedName;
- (void)output:(id)arg1;
- (void)output:(id)arg1 arguments:(char *)arg2;
- (void)outputCompactJsonObject:(id)arg1;
- (void)outputError:(id)arg1;
- (void)outputError:(id)arg1 arguments:(char *)arg2;
- (void)outputErrorWithJsonOutput:(bool)arg1 format:(id)arg2;
- (void)outputJsonObject:(id)arg1;
- (bool)processArgc:(int)arg1 argv:(char **)arg2;
- (bool)processOption:(int)arg1 arg:(id)arg2;
- (int)run;
- (void)willProcessOptions;
- (bool)writeData:(id)arg1 toPathOrStdout:(id)arg2;

@end
