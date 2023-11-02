
@interface OSLogEntrySignpost : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload> {
    unsigned long long  _activityIdentifier;
    NSString * _category;
    NSArray * _components;
    NSString * _formatString;
    NSString * _process;
    int  _processIdentifier;
    NSString * _sender;
    unsigned long long  _signpostIdentifier;
    NSString * _signpostName;
    long long  _signpostType;
    NSString * _subsystem;
    unsigned long long  _threadIdentifier;
}

@property (nonatomic, readonly) unsigned long long activityIdentifier;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) unsigned long long signpostIdentifier;
@property (nonatomic, readonly) NSString *signpostName;
@property (nonatomic, readonly) long long signpostType;
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
- (id)initWithEventProxy:(id)arg1;
- (id)process;
- (int)processIdentifier;
- (id)sender;
- (unsigned long long)signpostIdentifier;
- (id)signpostName;
- (long long)signpostType;
- (id)subsystem;
- (unsigned long long)threadIdentifier;

@end
