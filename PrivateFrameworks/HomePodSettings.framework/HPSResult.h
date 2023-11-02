
@interface HPSResult : NSObject <NSSecureCoding> {
    NSUUID * _accessoryIdentifier;
    NSError * _error;
    bool  _isSuccess;
    HPSSetting * _setting;
}

@property (nonatomic, readonly) NSUUID *accessoryIdentifier;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isSuccess;
@property (nonatomic, readonly) HPSSetting *setting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetting:(id)arg1 accessoryIdentifier:(id)arg2 error:(id)arg3 result:(bool)arg4;
- (bool)isSuccess;
- (id)setting;

@end
