
@interface ASTContext : NSObject <NSCopying, NSSecureCoding> {
    long long  _clientStatus;
    long long  _command;
    ASTControlCommand * _controlCommand;
    ASTIdentity * _identity;
    bool  _testSuiteRunning;
}

@property (nonatomic) long long clientStatus;
@property (nonatomic) long long command;
@property (nonatomic, readonly) ASTControlCommand *controlCommand;
@property (nonatomic, readonly, copy) ASTIdentity *identity;
@property (nonatomic) bool testSuiteRunning;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)clientStatus;
- (long long)command;
- (id)controlCommand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (void)setClientStatus:(long long)arg1;
- (void)setCommand:(long long)arg1;
- (void)setTestSuiteRunning:(bool)arg1;
- (bool)testSuiteRunning;

@end
