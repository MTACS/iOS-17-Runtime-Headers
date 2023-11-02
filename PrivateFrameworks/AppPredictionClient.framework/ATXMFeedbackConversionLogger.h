
@interface ATXMFeedbackConversionLogger : NSObject

+ (void)logRecordedFeedbackWithEngagementType:(int)arg1 consumerSubType:(unsigned char)arg2 tracker:(id)arg3;
+ (void)logUserInteractionFeedbackWithEngagementType:(int)arg1 consumerSubType:(unsigned char)arg2 tracker:(id)arg3;

@end
