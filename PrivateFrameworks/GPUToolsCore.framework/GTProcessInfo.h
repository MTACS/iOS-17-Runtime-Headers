
@interface GTProcessInfo : NSObject <NSSecureCoding> {
    NSArray * _arguments;
    NSString * _bundleIdentifier;
    NSDictionary * _environment;
    int  _ppid;
    int  _processIdentifier;
    NSString * _processName;
}

@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic) int ppid;
@property (nonatomic) int processIdentifier;
@property (nonatomic, copy) NSString *processName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arguments;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)ppid;
- (int)processIdentifier;
- (id)processName;
- (void)setArguments:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setPpid:(int)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessName:(id)arg1;

@end
