
@interface CTTransportKeysReceipt : NSObject <NSCopying, NSSecureCoding> {
    NSString * _sps_environment;
    NSArray * _stks;
}

@property (nonatomic, retain) NSString *sps_environment;
@property (nonatomic, retain) NSArray *stks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWith:(id)arg1;
- (id)initWith:(id)arg1 sps:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setSps_environment:(id)arg1;
- (void)setStks:(id)arg1;
- (id)sps_environment;
- (id)stks;

@end
