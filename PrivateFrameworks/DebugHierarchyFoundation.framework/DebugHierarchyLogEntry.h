
@interface DebugHierarchyLogEntry : NSObject {
    NSString * _environmentInfo;
    NSString * _message;
    NSString * _methodSignature;
    unsigned long long  _severity;
    NSDate * _timestamp;
    NSString * _title;
}

@property (retain) NSString *environmentInfo;
@property (retain) NSString *message;
@property (retain) NSString *methodSignature;
@property unsigned long long severity;
@property (retain) NSDate *timestamp;
@property (retain) NSString *title;

+ (id)errorLogEntryWithTitle:(id)arg1 message:(id)arg2 methodSignature:(id)arg3;
+ (id)errorLogEntryWithTitle:(id)arg1 message:(id)arg2 methodSignature:(id)arg3 environmentInfo:(id)arg4;
+ (id)formattedSummaryOfLogs:(id)arg1;
+ (id)logEntryWithDictionary:(id)arg1;
+ (id)warningLogEntryWithTitle:(id)arg1 message:(id)arg2 methodSignature:(id)arg3;
+ (id)warningLogEntryWithTitle:(id)arg1 message:(id)arg2 methodSignature:(id)arg3 environmentInfo:(id)arg4;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)environmentInfo;
- (id)formattedSummary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSeverity:(unsigned long long)arg1 title:(id)arg2 message:(id)arg3 methodSignature:(id)arg4 environmentInfo:(id)arg5;
- (id)message;
- (id)methodSignature;
- (void)setEnvironmentInfo:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMethodSignature:(id)arg1;
- (void)setSeverity:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)severity;
- (id)timestamp;
- (id)title;

@end
