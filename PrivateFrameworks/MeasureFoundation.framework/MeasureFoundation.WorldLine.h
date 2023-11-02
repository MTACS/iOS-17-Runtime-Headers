
@interface MeasureFoundation.WorldLine : MeasureFoundation.MeasureObject {
    void center;
    void ends;
    void identifiersOfObjectsComposedInto;
    void isALineMeasurement;
    void isOnVerticalGuide;
    void lineType;
    void meanFPSDuringPlacement;
    void snappedPoints;
}

@property (nonatomic, copy) NSArray *identifiersOfObjectsComposedInto;

- (void).cxx_destruct;
- (id)identifiersOfObjectsComposedInto;
- (id)init;
- (void)setIdentifiersOfObjectsComposedInto:(id)arg1;

@end
