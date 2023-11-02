
@interface VKCameraRegionRestriction : NSObject <NSSecureCoding> {
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _eastOfDatelineCoord;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _eastOfDatelineMercator;
    bool  _empty;
    GEOMapRegion * _mapRegion;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _singleRestrictionCoord;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _singleRestrictionMercator;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _westOfDatelineCoord;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _westOfDatelineMercator;
}

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, retain) GEOMapRegion *mapRegion;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x1; double x2; })clampedCoordinate:(struct { double x1; double x2; })arg1;
- (struct Matrix<double, 2, 1> { double x1[2]; })clampedPosition:(struct Matrix<double, 2, 1> { double x1[2]; })arg1;
- (struct Matrix<double, 2, 1> { double x1[2]; })clampedPosition:(struct Matrix<double, 2, 1> { double x1[2]; })arg1 usingSingleRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })arg2 westOfDatelineRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })arg3 eastOfDatelineRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })arg4 wrapRange:(struct Range<double> { double x1; double x2; })arg5;
- (struct Matrix<double, 2, 1> { double x1[2]; })clampedPositionForOrigin:(struct Matrix<double, 2, 1> { double x1[2]; })arg1 delta:(struct Matrix<double, 2, 1> { double x1[2]; })arg2;
- (bool)containsCoordinate:(struct { double x1; double x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapRegion:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)radianSingleRect:(void*)arg1 westOfDatelineRect:(void*)arg2 eastOfDatelineRect:(void*)arg3;

@end
