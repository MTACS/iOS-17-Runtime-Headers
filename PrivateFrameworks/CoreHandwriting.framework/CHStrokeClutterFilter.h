
@interface CHStrokeClutterFilter : NSObject <NSCopying> {
    NSDictionary * _CHStrokeID2HeatmapItemID;
    void * _heatMap;
    NSDictionary * _heatmapItemID2CHStrokeID;
}

@property (nonatomic, readonly) long long highDensityStrokeCount;

- (void).cxx_destruct;
- (id)clutterFilterByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 affectedStrokeIdentifiers:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)highDensityStrokeCount;
- (id)init;
- (bool)isEmpty;
- (bool)isHighDensityStroke:(id)arg1;
- (id)strokeIDsWithinRectangleRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;

@end
