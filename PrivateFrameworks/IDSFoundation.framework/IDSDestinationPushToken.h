
@interface IDSDestinationPushToken : IDSDestination {
    NSString * _alias;
    NSData * _pushToken;
}

@property (nonatomic, readonly) NSString *alias;
@property (nonatomic, readonly) NSData *pushToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alias;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlias:(id)arg1 pushToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pushToken;

@end
