
@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding> {
    long long  _options;
    DNDState * _previousState;
    unsigned long long  _reason;
    long long  _source;
    DNDState * _state;
}

@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) DNDState *previousState;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly, copy) DNDState *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviousState:(id)arg1 state:(id)arg2 reason:(unsigned long long)arg3 source:(long long)arg4 options:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (long long)options;
- (id)previousState;
- (unsigned long long)reason;
- (long long)source;
- (id)state;

@end
