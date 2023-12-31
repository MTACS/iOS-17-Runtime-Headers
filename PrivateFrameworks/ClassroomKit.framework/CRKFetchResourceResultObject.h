
@interface CRKFetchResourceResultObject : CATTaskResultObject {
    NSData * _resourceData;
}

@property (nonatomic, retain) NSData *resourceData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resourceData;
- (void)setResourceData:(id)arg1;

@end
