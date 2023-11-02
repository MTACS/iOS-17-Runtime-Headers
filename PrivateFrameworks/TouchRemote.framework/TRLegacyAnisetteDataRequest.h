
@interface TRLegacyAnisetteDataRequest : TRRequestMessage {
    NSString * _dsid;
}

@property (nonatomic, copy) NSString *dsid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDsid:(id)arg1;

@end
