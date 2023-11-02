
@interface WFRunnerPrewarmManager : NSObject {
    NSXPCConnection * _runner;
}

@property (nonatomic, retain) NSXPCConnection *runner;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)prewarmRunnerIfNecessary;
- (void)reset;
- (id)runner;
- (void)setRunner:(id)arg1;

@end
