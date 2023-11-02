
@interface CHTextLineStrokeGroup : CHStrokeGroup {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _averageStrokeDeviation;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _averageWritingOrientation;
    NSArray * _coalescedLastSubstrokes;
    long long  _lastSubstrokeIndexBeforeMerge;
    struct vector<CGVector, std::allocator<CGVector>> { 
        struct CGVector {} *__begin_; 
        struct CGVector {} *__end_; 
        struct __compressed_pair<CGVector *, std::allocator<CGVector>> { 
            struct CGVector {} *__value_; 
        } __end_cap_; 
    }  _localStrokeWritingOrientations;
    NSArray * _writingDirectionSortedStrokeIdentifiers;
    NSArray * _writingDirectionSortedSubstrokes;
}

@property (nonatomic, readonly) NSArray *writingDirectionSortedStrokeIdentifiers;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGVector { double x1; double x2; })averageStrokeDeviation;
- (struct CGVector { double x1; double x2; })averageWritingOrientation;
- (id)coalescedLastSubstrokes;
- (void)encodeWithCoder:(id)arg1;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 writingDirectionSortedSubstrokes:(id)arg6 averageWritingOrientation:(struct CGVector { double x1; double x2; })arg7 averageStrokeDeviation:(struct CGVector { double x1; double x2; })arg8 writingDirectionSortedStrokeIdentifiers:(id)arg9 localStrokeWritingOrientations:(const void*)arg10 coalescedLastSubstrokes:(id)arg11 groupingConfidence:(double)arg12 lastSubstrokeIndexBeforeMerge:(long long)arg13 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg14;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 classification:(long long)arg6 strategyIdentifier:(id)arg7 writingDirectionSortedSubstrokes:(id)arg8 averageWritingOrientation:(struct CGVector { double x1; double x2; })arg9 averageStrokeDeviation:(struct CGVector { double x1; double x2; })arg10 writingDirectionSortedStrokeIdentifiers:(id)arg11 localStrokeWritingOrientations:(const void*)arg12 coalescedLastSubstrokes:(id)arg13 groupingConfidence:(double)arg14 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg15;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 classification:(long long)arg5 strategyIdentifier:(id)arg6 writingDirectionSortedSubstrokes:(id)arg7 averageWritingOrientation:(struct CGVector { double x1; double x2; })arg8 averageStrokeDeviation:(struct CGVector { double x1; double x2; })arg9 writingDirectionSortedStrokeIdentifiers:(id)arg10 localStrokeWritingOrientations:(const void*)arg11 coalescedLastSubstrokes:(id)arg12 groupingConfidence:(double)arg13 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg14;
- (id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 classification:(long long)arg7 strategyIdentifier:(id)arg8 writingDirectionSortedSubstrokes:(id)arg9 averageWritingOrientation:(struct CGVector { double x1; double x2; })arg10 averageStrokeDeviation:(struct CGVector { double x1; double x2; })arg11 writingDirectionSortedStrokeIdentifiers:(id)arg12 localStrokeWritingOrientations:(const void*)arg13 coalescedLastSubstrokes:(id)arg14 groupingConfidence:(double)arg15 firstStrokeOrigin:(struct CGPoint { double x1; double x2; })arg16;
- (long long)lastSubstrokeIndexBeforeMerge;
- (void*)localStrokeWritingOrientations;
- (struct CGVector { double x1; double x2; })localWritingOrientationAtStrokeIndex:(long long)arg1;
- (struct CGPath { }*)newEstimatedBaselineForStrokesWithTokens:(id)arg1 tokenStrokeIdentifiers:(id)arg2;
- (id)writingDirectionSortedStrokeIdentifiers;
- (id)writingDirectionSortedSubstrokes;

@end
