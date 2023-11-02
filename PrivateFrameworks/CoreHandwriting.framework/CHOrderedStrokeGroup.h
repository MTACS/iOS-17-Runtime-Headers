
@interface CHOrderedStrokeGroup : CHStrokeGroup {
    NSArray * _orderedStrokeIdentifiers;
}

@property (nonatomic, readonly) NSArray *orderedStrokeIdentifiers;

- (void).cxx_destruct;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg9 orderedStrokeIdentifiers:(id)arg10;
- (id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 classification:(long long)arg7 groupingConfidence:(double)arg8 strategyIdentifier:(id)arg9 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg10 orderedStrokeIdentifiers:(id)arg11;
- (id)orderedStrokeIdentifiers;

@end
