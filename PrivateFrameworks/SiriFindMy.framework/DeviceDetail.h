
@interface DeviceDetail : INObject

@property (nonatomic, retain) NSNumber *canPlaySound;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceClassSemantic;
@property (nonatomic) long long deviceLocality;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic) long long deviceSpecificityLevel;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, retain) NSNumber *isEarbuds;
@property (nonatomic, retain) NSNumber *isHeadphones;
@property (nonatomic, retain) NSNumber *isThisDevice;
@property (nonatomic, retain) SpeakableLocation *location;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *productNameSemantic;
@property (nonatomic, copy) NSString *productType;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
