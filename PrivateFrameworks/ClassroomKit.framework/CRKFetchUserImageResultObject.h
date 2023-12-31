
@interface CRKFetchUserImageResultObject : CATTaskResultObject {
    NSData * _userImageData;
}

@property (nonatomic, copy) NSData *userImageData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUserImageData:(id)arg1;
- (id)userImageData;

@end
