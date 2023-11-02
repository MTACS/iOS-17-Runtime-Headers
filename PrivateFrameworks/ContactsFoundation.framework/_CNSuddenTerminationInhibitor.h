
@interface _CNSuddenTerminationInhibitor : CNInhibitor {
    NSProcessInfo * _processInfo;
}

@property (nonatomic, retain) NSProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProcessInfo:(id)arg1;
- (id)processInfo;
- (void)setProcessInfo:(id)arg1;
- (void)start;
- (void)stop;

@end
