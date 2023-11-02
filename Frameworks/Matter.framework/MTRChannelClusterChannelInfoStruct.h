
@interface MTRChannelClusterChannelInfoStruct : NSObject <NSCopying> {
    NSString * _affiliateCallSign;
    NSString * _callSign;
    NSNumber * _majorNumber;
    NSNumber * _minorNumber;
    NSString * _name;
}

@property (nonatomic, copy) NSString *affiliateCallSign;
@property (nonatomic, copy) NSString *callSign;
@property (nonatomic, copy) NSNumber *majorNumber;
@property (nonatomic, copy) NSNumber *minorNumber;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)affiliateCallSign;
- (id)callSign;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)majorNumber;
- (id)minorNumber;
- (id)name;
- (void)setAffiliateCallSign:(id)arg1;
- (void)setCallSign:(id)arg1;
- (void)setMajorNumber:(id)arg1;
- (void)setMinorNumber:(id)arg1;
- (void)setName:(id)arg1;

@end
