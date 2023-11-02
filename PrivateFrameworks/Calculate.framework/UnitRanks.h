
@interface UnitRanks : NSObject {
    bool  _containsCurrency;
    bool  _containsFrom;
    bool  _containsTo;
    bool  _containsUnit;
    NSMutableArray * _ranks;
    NSMutableSet * _units;
    UnitsInfo * _unitsInfo;
}

@property (readonly) bool containsCurrency;
@property (readonly) bool containsFrom;
@property (readonly) bool containsTo;
@property (readonly) bool containsUnit;
@property (readonly) bool isAmbiguous;
@property (nonatomic, retain) NSMutableArray *ranks;
@property (nonatomic, retain) NSMutableSet *units;
@property (nonatomic) UnitsInfo *unitsInfo;

+ (id)unitRanksWithUnitsInfo:(id)arg1;

- (void).cxx_destruct;
- (void)addUnitRank:(id)arg1;
- (bool)containsCurrency;
- (bool)containsFrom;
- (bool)containsTo;
- (bool)containsUnit;
- (id)init;
- (id)initWithUnitsInfo:(id)arg1;
- (bool)isAmbiguous;
- (id)ranks;
- (void)setRanks:(id)arg1;
- (void)setUnits:(id)arg1;
- (void)setUnitsInfo:(id)arg1;
- (void)sort;
- (id)units;
- (id)unitsInfo;

@end
