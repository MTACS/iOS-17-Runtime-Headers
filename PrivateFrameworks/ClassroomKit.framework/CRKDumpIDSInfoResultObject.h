
@interface CRKDumpIDSInfoResultObject : CATTaskResultObject {
    NSDictionary * _info;
}

@property (nonatomic, readonly, copy) NSDictionary *info;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1;

@end
