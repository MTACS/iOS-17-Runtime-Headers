
@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess> {
    unsigned long long  _activityIdentifier;
    unsigned long long  _parentActivityIdentifier;
    NSString * _process;
    int  _processIdentifier;
    NSString * _sender;
    unsigned long long  _threadIdentifier;
}

@property (nonatomic, readonly) unsigned long long activityIdentifier;
@property (nonatomic, readonly) unsigned long long parentActivityIdentifier;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) unsigned long long threadIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventProxy:(id)arg1;
- (unsigned long long)parentActivityIdentifier;
- (id)process;
- (int)processIdentifier;
- (id)sender;
- (unsigned long long)threadIdentifier;

@end
