
@interface REElementOpenAction : REElementAction {
    NSString * _applicationID;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)_performWithContext:(id)arg1;
- (id)applicationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 applicationID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)url;

@end
