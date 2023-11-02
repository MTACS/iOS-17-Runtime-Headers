
@interface WFDatabaseResultState : NSObject <NSSecureCoding> {
    unsigned long long  _objectType;
    NSSet * _state;
}

@property (nonatomic, readonly) unsigned long long objectType;
@property (nonatomic, readonly) NSSet *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectType:(unsigned long long)arg1 state:(id)arg2;
- (unsigned long long)objectType;
- (id)state;

@end
