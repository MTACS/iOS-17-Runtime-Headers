
@interface CSFieldSpecification : NSObject {
    NSString * _attribute;
    NSString * _displayName;
    NSString * _status;
    NSString * _token;
}

@property (nonatomic, readonly) NSString *attribute;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (id)attribute;
- (id)dictionaryFormat;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 attribute:(id)arg2 status:(id)arg3 token:(id)arg4;
- (id)status;
- (id)token;

@end
