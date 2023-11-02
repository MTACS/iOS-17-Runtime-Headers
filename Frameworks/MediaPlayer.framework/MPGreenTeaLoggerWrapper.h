
@interface MPGreenTeaLoggerWrapper : NSObject {
    ML3GreenTeaLogger * _logger;
}

- (void).cxx_destruct;
- (void)beginLogAccessInterval;
- (void)endLogAccessInterval;
- (id)initWithAccessorName:(id)arg1;
- (void)logAccess;

@end
