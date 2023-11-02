
@interface CTBundleMatchingInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _imsi;
    NSString * _mcc;
    NSString * _mnc;
}

@property (nonatomic, retain) NSString *imsi;
@property (nonatomic, retain) NSString *mcc;
@property (nonatomic, retain) NSString *mnc;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imsi;
- (id)initWithCoder:(id)arg1;
- (id)mcc;
- (id)mnc;
- (void)setImsi:(id)arg1;
- (void)setMcc:(id)arg1;
- (void)setMnc:(id)arg1;

@end
