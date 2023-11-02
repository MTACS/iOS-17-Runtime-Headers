
@interface QLKeyCommand : NSObject <NSSecureCoding> {
    UIKeyCommand * _keyCommand;
    unsigned long long  _keyCommandIdentifier;
}

@property (nonatomic, retain) UIKeyCommand *keyCommand;
@property unsigned long long keyCommandIdentifier;

+ (id)keyCommandWithKeyCommand:(id)arg1 identifier:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyCommand;
- (unsigned long long)keyCommandIdentifier;
- (void)setKeyCommand:(id)arg1;
- (void)setKeyCommandIdentifier:(unsigned long long)arg1;

@end
