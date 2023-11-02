
@interface CTTransportKeysUpdate : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _keys;
    NSString * _sps_environment;
}

@property (nonatomic, retain) NSArray *keys;
@property (nonatomic, retain) NSString *sps_environment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWith:(id)arg1;
- (id)initWith:(id)arg1 sps:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)keys;
- (void)setKeys:(id)arg1;
- (void)setSps_environment:(id)arg1;
- (id)sps_environment;

@end
