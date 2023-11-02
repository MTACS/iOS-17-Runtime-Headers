
@interface MUImpressionsLogger : NSObject <MUImpressionsLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)logImpressionElementDidEnter:(id)arg1 onDate:(id)arg2;
- (void)logImpressionElementDidExit:(id)arg1 usingEnterDate:(id)arg2 exitDate:(id)arg3;

@end
