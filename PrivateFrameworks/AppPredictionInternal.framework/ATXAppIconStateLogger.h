
@interface ATXAppIconStateLogger : NSObject <ATXPeriodicLoggerSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)getMetrics;
- (void)setEnabled:(bool)arg1;

@end
