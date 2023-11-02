
@interface CRPairedOutputRegionMutualGeometryInfo : NSObject {
    double  _inlineSpacingAlongBaseline;
    bool  _isCenterJustified;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _leftOffsetAlongBaseline;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _rightOffsetAlongBaseline;
}

@property (readonly) double inlineSpacingAlongBaseline;
@property (readonly) bool isCenterJustified;
@property (readonly) struct CGVector { double x1; double x2; } leftOffsetAlongBaseline;
@property (readonly) struct CGVector { double x1; double x2; } rightOffsetAlongBaseline;

- (id)initFromGeometryInfo1:(id)arg1 geometryInfo2:(id)arg2;
- (double)inlineSpacingAlongBaseline;
- (bool)isCenterJustified;
- (struct CGVector { double x1; double x2; })leftOffsetAlongBaseline;
- (struct CGVector { double x1; double x2; })rightOffsetAlongBaseline;

@end
