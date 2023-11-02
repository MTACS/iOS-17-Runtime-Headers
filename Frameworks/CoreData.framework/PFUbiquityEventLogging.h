
@interface PFUbiquityEventLogging : NSObject {
    NSMutableSet * _logEvents;
    long long  _logLevel;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;

@end
