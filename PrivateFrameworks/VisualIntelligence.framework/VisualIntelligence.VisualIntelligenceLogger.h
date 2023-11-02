
@interface VisualIntelligence.VisualIntelligenceLogger : NSObject

+ (void)logVerboseWithType:(unsigned char)arg1 evaluatedMessage:(id)arg2 file:(id)arg3 line:(long long)arg4;
+ (void)logWithType:(unsigned char)arg1 evaluatedMessage:(id)arg2 file:(id)arg3 line:(long long)arg4;
+ (id)osLog;
+ (bool)shouldLogMessage;
+ (bool)shouldLogVerboseMessage;

- (void).cxx_destruct;
- (id)init;

@end
