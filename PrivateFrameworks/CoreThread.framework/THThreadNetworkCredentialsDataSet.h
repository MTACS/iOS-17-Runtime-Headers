
@interface THThreadNetworkCredentialsDataSet : NSObject <NSSecureCoding> {
    NSData * _dataSetArray;
    NSString * _userInfo;
}

@property (nonatomic, copy) NSData *dataSetArray;
@property (nonatomic, copy) NSString *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataSetArray;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSetArray:(id)arg1 userInfo:(id)arg2;
- (void)setDataSetArray:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
