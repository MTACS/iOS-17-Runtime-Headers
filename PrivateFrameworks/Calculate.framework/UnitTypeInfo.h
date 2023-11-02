
@interface UnitTypeInfo : NSObject {
    UnitInfo * _baseUnit;
    struct UnitCounts { 
        struct UnitCount { 
            int unitID; 
            int exponent; 
        } types[16]; 
    }  _decomposition;
    struct { 
        unsigned long long w[2]; 
    }  _decompositionCoefficient;
    bool  _isCurrency;
    bool  _isDecomposable;
    bool  _isTemperature;
    bool  _isVolume;
    NSString * _name;
    int  _unitType;
    NSArray * _units;
}

@property (nonatomic) UnitInfo *baseUnit;
@property (nonatomic) struct UnitCounts { struct UnitCount { int x_1_1_1; int x_1_1_2; } x1[16]; } decomposition;
@property (nonatomic) struct { unsigned long long x1[2]; } decompositionCoefficient;
@property (nonatomic) bool isCurrency;
@property (nonatomic) bool isDecomposable;
@property (nonatomic) bool isTemperature;
@property (nonatomic) bool isVolume;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int unitType;
@property (nonatomic, retain) NSArray *units;

- (void).cxx_destruct;
- (id)baseUnit;
- (struct UnitCounts { struct UnitCount { int x_1_1_1; int x_1_1_2; } x1[16]; })decomposition;
- (struct { unsigned long long x1[2]; })decompositionCoefficient;
- (bool)isCurrency;
- (bool)isDecomposable;
- (bool)isTemperature;
- (bool)isVolume;
- (id)name;
- (void)setBaseUnit:(id)arg1;
- (void)setDecomposition:(struct UnitCounts { struct UnitCount { int x_1_1_1; int x_1_1_2; } x1[16]; })arg1;
- (void)setDecompositionCoefficient:(struct { unsigned long long x1[2]; })arg1;
- (void)setIsCurrency:(bool)arg1;
- (void)setIsDecomposable:(bool)arg1;
- (void)setIsTemperature:(bool)arg1;
- (void)setIsVolume:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setUnitType:(int)arg1;
- (void)setUnits:(id)arg1;
- (int)unitType;
- (id)units;

@end
