
@interface FACircleStateResponse : NSObject <NSSecureCoding> {
    NSError * _error;
    bool  _loadSuccess;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool loadSuccess;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoadSuccess:(bool)arg1 error:(id)arg2 userInfo:(id)arg3;
- (bool)loadSuccess;
- (bool)success;
- (id)userInfo;

@end
