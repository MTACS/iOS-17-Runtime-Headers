
@interface PKSecureElementApplet : NSObject <NSSecureCoding> {
    bool  _containsSubKeys;
    NSString * _identifier;
    unsigned long long  _lifecycleState;
    bool  _locked;
    NSString * _packageIdentifier;
}

@property (nonatomic, readonly) bool containsSubKeys;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long lifecycleState;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (nonatomic, readonly) NSString *packageIdentifier;

+ (id)secureElementAppletWithInternalApplet:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsSubKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 packageIdentifier:(id)arg2 lifecycleState:(unsigned long long)arg3;
- (id)initWithIdentifier:(id)arg1 packageIdentifier:(id)arg2 lifecycleState:(unsigned long long)arg3 locked:(bool)arg4 containsSubKeys:(bool)arg5;
- (bool)isLocked;
- (id)jsonDictionaryRepresentation;
- (unsigned long long)lifecycleState;
- (id)packageIdentifier;

@end
