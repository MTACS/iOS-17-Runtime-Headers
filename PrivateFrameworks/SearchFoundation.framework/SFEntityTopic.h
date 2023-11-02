
@interface SFEntityTopic : SFQueryTopic <SFEntityTopic> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly) int queryType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 identifier:(id)arg2;
- (id)initWithType:(int)arg1 query:(id)arg2 identifier:(id)arg3;
- (void)setIdentifier:(id)arg1;

@end
