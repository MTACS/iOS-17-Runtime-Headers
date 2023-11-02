
@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging> {
    NSArray * _loggers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *loggers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (id)init;
- (id)initWithLoggers:(id)arg1;
- (id)loggers;
- (void)setLoggers:(id)arg1;

@end
