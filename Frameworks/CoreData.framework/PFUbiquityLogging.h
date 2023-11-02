
@interface PFUbiquityLogging : NSObject {
    int  _desiredLogLevel;
}

@property (nonatomic) int desiredLogLevel;

+ (bool)canLogMessageAtLevel:(int)arg1;
+ (void)initialize;
+ (void)setLoggingLevel:(int)arg1;

- (void)dealloc;
- (int)desiredLogLevel;
- (id)init;
- (void)setDesiredLogLevel:(int)arg1;
- (void)userDefaultsChanged:(id)arg1;

@end
