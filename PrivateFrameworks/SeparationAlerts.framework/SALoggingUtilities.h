
@interface SALoggingUtilities : NSObject

+ (id)computeMessagesForEvent:(id)arg1;
+ (id)extractEventFromMessages:(id)arg1;
+ (id)extractUniqueIdentifierFromMessage:(id)arg1;
+ (void)logTAEvent:(id)arg1;
+ (id)stringToSplit:(id)arg1 maxSplitSize:(unsigned long long)arg2;

@end
