
@interface CLSAuthTreeNode : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _status;
    NSString * _statusID;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSString *statusID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusID:(id)arg1 identifier:(id)arg2 status:(long long)arg3;
- (long long)status;
- (id)statusID;

@end
