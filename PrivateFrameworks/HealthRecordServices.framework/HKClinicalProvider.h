
@interface HKClinicalProvider : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    HKClinicalBrand * _brand;
    NSString * _externalID;
    NSArray * _gateways;
    NSURL * _informationURL;
    NSString * _location;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSArray *gateways;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *informationURL;
@property (nonatomic, readonly, copy) NSString *location;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (id)gateways;
- (id)informationURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 location:(id)arg4 informationURL:(id)arg5 brand:(id)arg6 gateways:(id)arg7;
- (bool)isSupported;
- (id)location;
- (id)subtitle;
- (id)title;

@end
