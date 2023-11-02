
@interface SBMutableDodgingModel : SBDodgingModel

@property (nonatomic, retain) NSMutableArray *identifiers;

- (void)addIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 center:(struct CGPoint { double x1; double x2; })arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (void)bringIdentifierToFront:(id)arg1;
- (void)removeIdentifier:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1 forIdentifier:(id)arg2;
- (void)setIndex:(unsigned long long)arg1 forIdentifier:(id)arg2;
- (void)setReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forIdentifier:(id)arg2;

@end
