
@interface OSLogEntryLog : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload> {
    unsigned long long  _activityIdentifier;
    NSString * _category;
    NSArray * _components;
    NSString * _formatString;
    long long  _level;
    NSString * _process;
    int  _processIdentifier;
    NSString * _sender;
    NSString * _subsystem;
    unsigned long long  _threadIdentifier;
}

@property (nonatomic, readonly) unsigned long long activityIdentifier;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) unsigned long long threadIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityIdentifier;
- (id)category;
- (id)components;
- (void)encodeWithCoder:(id)arg1;
- (id)formatString;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 composedMessage:(id)arg2 processIdentifier:(int)arg3;
- (id)initWithEventProxy:(id)arg1;
- (long long)level;
- (id)process;
- (int)processIdentifier;
- (id)sender;
- (id)subsystem;
- (unsigned long long)threadIdentifier;

@end
