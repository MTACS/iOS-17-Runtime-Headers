
@interface UnitsInfo : NSObject {
    UnitTypeInfo * _angleInfo;
    UnitInfo * _degreesInfo;
    UnitInfo * _radiansInfo;
    int  _unitCount;
    NSMutableArray * _unitIDToInfo;
    NSMutableDictionary * _unitNameToInfo;
    NSArray * _unitNames;
    int  _unitTypeCount;
    NSMutableDictionary * _unitTypeNameToInfo;
    NSMutableArray * _unitTypeToInfo;
}

@property (nonatomic) UnitTypeInfo *angleInfo;
@property (nonatomic) UnitInfo *degreesInfo;
@property (nonatomic) UnitInfo *radiansInfo;
@property (nonatomic, readonly) int unitCount;
@property (nonatomic, retain) NSMutableArray *unitIDToInfo;
@property (nonatomic, retain) NSMutableDictionary *unitNameToInfo;
@property (nonatomic, readonly) NSArray *unitNames;
@property (nonatomic, readonly) int unitTypeCount;
@property (nonatomic, retain) NSMutableDictionary *unitTypeNameToInfo;
@property (nonatomic, retain) NSMutableArray *unitTypeToInfo;

+ (bool)shouldSkipUnitName:(id)arg1;
+ (id)unitsInfoWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)angleInfo;
- (id)degreesInfo;
- (id)infoForAngle;
- (id)infoForDegrees;
- (id)infoForRadians;
- (id)infoForUnitID:(int)arg1;
- (id)infoForUnitName:(id)arg1;
- (id)infoForUnitType:(int)arg1;
- (id)infoForUnitTypeName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)populateSubunitIDs:(id)arg1 forUnit:(id)arg2 visited:(id)arg3;
- (id)radiansInfo;
- (void)setAngleInfo:(id)arg1;
- (void)setDegreesInfo:(id)arg1;
- (void)setRadiansInfo:(id)arg1;
- (void)setUnitIDToInfo:(id)arg1;
- (void)setUnitNameToInfo:(id)arg1;
- (void)setUnitTypeNameToInfo:(id)arg1;
- (void)setUnitTypeToInfo:(id)arg1;
- (int)unitCount;
- (id)unitIDToInfo;
- (id)unitNameToInfo;
- (id)unitNames;
- (int)unitTypeCount;
- (id)unitTypeNameToInfo;
- (id)unitTypeToInfo;

@end
