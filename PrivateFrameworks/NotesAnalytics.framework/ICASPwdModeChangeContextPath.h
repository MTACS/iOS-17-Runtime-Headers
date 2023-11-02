
@interface ICASPwdModeChangeContextPath : NSObject <AADataType> {
    long long  _pwdModeChangeContextPath;
}

@property (nonatomic, readonly) long long pwdModeChangeContextPath;

- (id)initWithPwdModeChangeContextPath:(long long)arg1;
- (long long)pwdModeChangeContextPath;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
