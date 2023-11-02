
@interface CPLaneGuidance : NSObject <CPAccNavPrimaryUpdateProtocol, CRAccNavIndexedInfoProviding, NSCopying, NSSecureCoding> {
    unsigned short  _componentID;
    unsigned short  _index;
    NSArray * _instructionVariants;
    NSArray * _lanes;
}

@property (nonatomic) unsigned short componentID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short index;
@property (nonatomic, readonly) unsigned short index;
@property (nonatomic, copy) NSArray *instructionVariants;
@property (nonatomic, copy) NSArray *lanes;
@property (readonly) Class superclass;

+ (id)accNavParameterKeysIndexed;
+ (id)accNavParameters;
+ (id)accNavParametersIndexed;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearValueForKey:(id)arg1;
- (unsigned short)componentID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)index;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instructionVariants;
- (bool)isEqual:(id)arg1;
- (id)laneGuidanceWithComponent:(id)arg1;
- (id)lanes;
- (id)navInfoWithComponent:(id)arg1;
- (void)setComponentID:(unsigned short)arg1;
- (void)setIndex:(unsigned short)arg1;
- (void)setInstructionVariants:(id)arg1;
- (void)setLanes:(id)arg1;

@end
