
@interface PDSRegistration : NSObject <NSSecureCoding> {
    BOOL  _pushEnvironment;
    NSString * _qualifierString;
    NSString * _topicString;
}

@property (nonatomic, readonly) BOOL pushEnvironment;
@property (nonatomic, readonly) NSString *qualifierString;
@property (nonatomic, readonly) NSString *topicString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1 pushEnvironment:(BOOL)arg2;
- (id)initWithTopic:(id)arg1 qualifier:(id)arg2 pushEnvironment:(BOOL)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRegistration:(id)arg1;
- (BOOL)pushEnvironment;
- (id)qualifierString;
- (id)topicString;

@end
