
@protocol OSLogEventProvider

@required

- (unsigned long long)activityIdentifier;
- (OSLogEventBacktrace *)backtrace;
- (NSUUID *)bootUUID;
- (NSString *)category;
- (NSString *)composedMessage;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (NSDate *)date;
- (OSLogEventDecomposedMessage *)decomposedMessage;
- (NSString *)formatString;
- (unsigned long long)logType;
- (struct { unsigned int x1; bool x2; })lossCount;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (struct timeval { long long x1; int x2; }*)lossEndUnixDate;
- (struct timezone { int x1; int x2; }*)lossEndUnixTimeZone;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (struct timeval { long long x1; int x2; }*)lossStartUnixDate;
- (struct timezone { int x1; int x2; }*)lossStartUnixTimeZone;
- (unsigned long long)machContinuousTimestamp;
- (unsigned long long)parentActivityIdentifier;
- (NSString *)process;
- (int)processIdentifier;
- (unsigned int)processIdentifierVersion;
- (NSString *)processImagePath;
- (NSUUID *)processImageUUID;
- (const char *)processImageUUIDBytes;
- (NSString *)sender;
- (unsigned long long)senderImageOffset;
- (NSString *)senderImagePath;
- (NSUUID *)senderImageUUID;
- (const char *)senderImageUUIDBytes;
- (unsigned long long)signpostIdentifier;
- (NSString *)signpostName;
- (unsigned long long)signpostScope;
- (unsigned long long)signpostType;
- (unsigned long long)size;
- (NSString *)subsystem;
- (unsigned long long)threadIdentifier;
- (unsigned long long)timeToLive;
- (NSTimeZone *)timeZone;
- (unsigned long long)traceIdentifier;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)type;
- (struct timeval { long long x1; int x2; }*)unixDate;
- (struct timezone { int x1; int x2; }*)unixTimeZone;
- (unsigned int)userIdentifier;

@end
