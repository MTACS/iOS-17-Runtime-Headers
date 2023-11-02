
@interface MKJunction : NSObject <NSSecureCoding> {
    unsigned long long  _count;
    int  _drivingSide;
    struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _elements;
    int  _maneuver;
    struct GEOJunctionElement {} * _snapped;
    int  _type;
}

@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (void)_addJunctionStemCapToPath:(id)arg1 fromStartPoint:(struct CGPoint { double x1; double x2; })arg2 topEndPoint:(struct CGPoint { double x1; double x2; })arg3 cornerRadius:(double)arg4;
- (bool)_willSnapToNinetyDegreesForManeuverTypes:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 intersectionBackgroundPath:(id*)arg3 strokePath:(id*)arg4 withSize:(struct CGSize { double x1; double x2; })arg5 metrics:(struct { bool x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; double x11; double x12; long long x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; bool x36; double x37; double x38; double x39; double x40; bool x41; bool x42; bool x43; bool x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; double x63; })arg6 drivingSide:(int)arg7 visualCenter:(struct CGPoint { double x1; double x2; }*)arg8;
- (void)getArrowPath:(id*)arg1 arrowStrokePath:(id*)arg2 pivot:(struct CGPoint { double x1; double x2; }*)arg3 withSize:(struct CGSize { double x1; double x2; })arg4 metrics:(struct { bool x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; double x11; double x12; long long x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; bool x36; double x37; double x38; double x39; double x40; bool x41; bool x42; bool x43; bool x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; double x63; })arg5 visualCenter:(struct CGPoint { double x1; double x2; }*)arg6;
- (void)getRoundaboutArrowPath:(id*)arg1 intersectionBackgroundPath:(id*)arg2 strokePath:(id*)arg3 withSize:(struct CGSize { double x1; double x2; })arg4 metrics:(struct { bool x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; double x11; double x12; long long x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; bool x36; double x37; double x38; double x39; double x40; bool x41; bool x42; bool x43; bool x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; double x63; })arg5 drivingSide:(int)arg6 visualCenter:(struct CGPoint { double x1; double x2; }*)arg7;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJunction:(id)arg1;
- (id)initWithType:(int)arg1 maneuver:(int)arg2 drivingSide:(int)arg3 elements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg4 count:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)rightOrLeftTurnWillSnapToNinetyDegrees;
- (id)roundaboutArrowWithSize:(struct CGSize { double x1; double x2; })arg1 metrics:(struct { bool x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; double x11; double x12; long long x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; bool x36; double x37; double x38; double x39; double x40; bool x41; bool x42; bool x43; bool x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; double x63; })arg2 outerRadius:(double)arg3 endAngle:(double)arg4 pivot:(struct CGPoint { double x1; double x2; }*)arg5;
- (int)type;
- (bool)willSnapToRightHandTurn;
- (bool)willSnapToSharpRight;

@end
