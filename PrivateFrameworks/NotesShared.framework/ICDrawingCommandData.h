
@interface ICDrawingCommandData : NSObject {
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } point; 
        double radius; 
        double opacity; 
        double azimuth; 
        double edgeWidth; 
        double aspectRatio; 
        double timestamp; 
    }  _baseValues;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _clipNormal;
    struct CGPoint { 
        double x; 
        double y; 
    }  _clipOrigin;
    struct CGColor { } * _color;
    struct ICDrawingCommandID { 
        unsigned int clock; 
        NSUUID *replicaUUID; 
        unsigned int subclock; 
    }  _commandID;
    bool  _isClipped;
    struct { 
        double baseAlpha; 
        double blendAlpha; 
        double targetMultiple; 
    }  _parameters;
    struct vector<ICDrawingOutputPoint, std::allocator<ICDrawingOutputPoint>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ICDrawingOutputPoint *, std::allocator<ICDrawingOutputPoint>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _points;
    unsigned int  _type;
}

@property (nonatomic) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; } baseValues;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } clipNormal;
@property (nonatomic) struct CGPoint { double x1; double x2; } clipOrigin;
@property (nonatomic, retain) struct CGColor { }*color;
@property (nonatomic) struct ICDrawingCommandID { unsigned int x1; id x2; unsigned int x3; } commandID;
@property bool isClipped;
@property (nonatomic) struct { double x1; double x2; double x3; } parameters;
@property (nonatomic, readonly) void*points;
@property (nonatomic, readonly) unsigned int randomSeed;
@property (nonatomic) unsigned int type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })baseValues;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })clipNormal;
- (struct CGPoint { double x1; double x2; })clipOrigin;
- (struct CGColor { }*)color;
- (struct ICDrawingCommandID { unsigned int x1; id x2; unsigned int x3; })commandID;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const void*)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (void)invalidateBounds;
- (bool)isClipped;
- (bool)isEqual:(id)arg1;
- (bool)isEqualDrawingCommandData:(id)arg1;
- (struct { double x1; double x2; double x3; })parameters;
- (void*)points;
- (unsigned int)randomSeed;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })readPointFromArchive:(const void*)arg1 deltaFrom:(const struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; }*)arg2;
- (double)renderCost;
- (unsigned int)savePoint:(const struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; }*)arg1 deltaFrom:(const struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; }*)arg2 toArchive:(void*)arg3;
- (unsigned int)saveToArchive:(void*)arg1 sortedUUIDs:(id)arg2 withPathData:(bool)arg3 isHidden:(bool)arg4;
- (void)setBaseValues:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })arg1;
- (void)setClipNormal:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClipOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setCommandID:(struct ICDrawingCommandID { unsigned int x1; id x2; unsigned int x3; })arg1;
- (void)setIsClipped:(bool)arg1;
- (void)setParameters:(struct { double x1; double x2; double x3; })arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (struct { double x1; double x2; double x3; })version1Parameters;

@end
