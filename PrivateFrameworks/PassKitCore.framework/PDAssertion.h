
@interface PDAssertion : NSObject {
    double  _createdAt;
    NSString * _identifier;
    bool  _invalidateWhenBackgrounded;
    NSString * _reason;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double createdAt;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool invalidateWhenBackgrounded;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (double)createdAt;
- (id)description;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;
- (bool)invalidateWhenBackgrounded;
- (id)reason;
- (void)setInvalidateWhenBackgrounded:(bool)arg1;
- (unsigned long long)type;

@end
