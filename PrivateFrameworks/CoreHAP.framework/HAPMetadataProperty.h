
@interface HAPMetadataProperty : HMFObject {
    NSNumber * _bitPosition;
    NSString * _propertyDescription;
    NSString * _propertyType;
}

@property (nonatomic, retain) NSNumber *bitPosition;
@property (copy) NSString *propertyDescription;
@property (nonatomic, retain) NSString *propertyType;

+ (id)init:(id)arg1 withDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)bitPosition;
- (id)description;
- (void)dump;
- (id)generateDictionary;
- (id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3;
- (id)propertyDescription;
- (id)propertyType;
- (void)setBitPosition:(id)arg1;
- (void)setPropertyDescription:(id)arg1;
- (void)setPropertyType:(id)arg1;

@end
