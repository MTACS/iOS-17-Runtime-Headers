
@interface AIDAServiceOperationResult : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    bool  _success;
    NSString * _type;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(bool)arg1 error:(id)arg2 type:(id)arg3;
- (bool)success;
- (id)type;

@end
