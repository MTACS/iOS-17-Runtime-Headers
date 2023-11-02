
@interface SXTraitDistanceComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {
    unsigned long long  _componentTrait;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _distance;
    unsigned long long  _otherComponentTrait;
    NSMutableIndexSet * _otherTraitAreas;
    NSMutableIndexSet * _traitAreas;
}

@property (nonatomic, readonly) unsigned long long componentTrait;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } distance;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long otherComponentTrait;
@property (nonatomic, retain) NSMutableIndexSet *otherTraitAreas;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableIndexSet *traitAreas;

- (void).cxx_destruct;
- (unsigned long long)componentTrait;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })distance;
- (id)initWithTrait:(unsigned long long)arg1 otherTrait:(unsigned long long)arg2 distance:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg3;
- (void)insertedComponent:(id)arg1 approximateLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)inspectTraitAreasForComponents:(id)arg1 layoutProvider:(id)arg2 DOMObjectProvider:(id)arg3;
- (unsigned long long)otherComponentTrait;
- (id)otherTraitAreas;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 DOMObjectProvider:(id)arg3;
- (void)setOtherTraitAreas:(id)arg1;
- (void)setTraitAreas:(id)arg1;
- (id)traitAreas;
- (bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end
