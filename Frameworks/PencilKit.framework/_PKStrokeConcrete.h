
@interface _PKStrokeConcrete : PKStroke {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPointForTexture;
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
    _PKStrokeClipPlane * _clipPlane;
    struct { 
        union { 
            struct { 
                unsigned int isHidden : 1; 
                unsigned int hiddenInherited : 1; 
                unsigned int inkInherited : 1; 
                unsigned int transformInherited : 1; 
                unsigned int isNewCopy : 1; 
                unsigned int randomSeed : 32; 
                unsigned int isRandomSeedSet : 1; 
                unsigned int isInProgressScribbleStroke : 1; 
                unsigned int combineWhenRendering_OBSOLETED : 1; 
            } ; 
            unsigned long long allFlags; 
        } ; 
    }  _flags;
    NSUUID * _groupID;
    PKInk * _ink;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _inkTransform;
    NSUUID * _renderGroupID;
    long long  _shapeType;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _sortID;
    PKStrokePath * _strokeData;
    PKStrokeMask * _strokeMask;
    NSUUID * _strokeUUID;
    NSArray * _substrokes;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _substrokesVersion;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    struct shared_ptr<PKProtobufUnknownFields> { 
        struct PKProtobufUnknownFields {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _unknownFields;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _version;
}

@property (nonatomic, readonly) bool _isFullyHidden;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } _sortID;
@property (nonatomic, retain) NSArray *_substrokes;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } _substrokesVersion;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } _version;

+ (id)decodeRenameableUUIDFromData:(const char *)arg1 transientArchiveDictionary:(id)arg2;
+ (void)encodeUUID:(id)arg1 toData:(void*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addTestDataToUnknownFields;
- (struct CGPoint { double x1; double x2; })_anchorPointForTexture;
- (id)_clipPlane;
- (id)_dataInUnknownFields;
- (struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })_flags;
- (id)_groupID;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_inkTransform;
- (void)_invalidateBounds;
- (bool)_isFullyHidden;
- (id)_mergeUnparentedWithStroke:(id)arg1 inDrawing:(id)arg2;
- (id)_mergeWithStroke:(id)arg1 inDrawing:(id)arg2;
- (id)_newStrokeWithSubstrokes:(id)arg1 inDrawing:(id)arg2;
- (id)_renderGroupID;
- (void)_setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setClipPlane:(id)arg1;
- (void)_setFlags:(struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1;
- (void)_setGroupID:(id)arg1;
- (void)_setInkTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setRenderGroupID:(id)arg1;
- (void)_setShapeType:(long long)arg1;
- (void)_setStrokeMask:(id)arg1;
- (void)_setStrokeUUID:(id)arg1;
- (void)_setSubstrokes:(id)arg1;
- (void)_setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (long long)_shapeType;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })_sortID;
- (id)_strokeMask;
- (id)_strokeUUID;
- (id)_substrokes;
- (id)_substrokesInDrawing:(id)arg1;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })_substrokesVersion;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transform;
- (id)_updateStroke:(id /* block */)arg1 inDrawing:(id)arg2;
- (id)_updateWithParent:(id)arg1 inDrawing:(id)arg2;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })_version;
- (long long)compareToStroke:(id)arg1;
- (id)copyForMutation;
- (id)copyForSubstroke;
- (id)copyWithNewAnchorPointForTexture:(struct CGPoint { double x1; double x2; })arg1;
- (id)dataRepresentation;
- (id)deltaTo:(id)arg1;
- (void)didUpdateInDrawing:(id)arg1;
- (void)didUpdateSubstrokesInDrawing:(id)arg1;
- (bool)hasSubstrokes;
- (id)init;
- (id)initWithArchive:(const void*)arg1 error:(id*)arg2;
- (id)initWithArchive:(const void*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(bool)arg5 transientArchiveDictionary:(id)arg6;
- (id)initWithArchive:(const void*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 transientArchiveDictionary:(id)arg4;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 id:(id)arg2 flags:(struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg3 ink:(id)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 substrokes:(id)arg6;
- (id)initWithData:(id)arg1 id:(id)arg2 sortID:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg3 flags:(struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg4 version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg5 ink:(id)arg6 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7 substrokes:(id)arg8 substrokesVersion:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg9;
- (id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 mask:(id)arg4 randomSeed:(unsigned int)arg5;
- (id)initWithLegacyArchive:(const void*)arg1 sortedUUIDs:(id)arg2;
- (id)initWithStroke:(id)arg1 hidden:(bool)arg2 version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg3 ink:(id)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)initWithV1Archive:(const void*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3;
- (id)ink;
- (bool)isEqual:(id)arg1;
- (id)mergeArrayOfStrokes:(id)arg1 with:(id)arg2 inDrawing:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)parentStrokeForInsertionInDrawing:(id)arg1;
- (id)path;
- (struct CGPoint { double x1; double x2; })readPointFromArchive:(const struct Point { int (**x1)(); float x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; } x4; }*)arg1;
- (struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })readPointFromLegacyArchive:(const struct Point { int (**x1)(); float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; } x9; }*)arg1 deltaFrom:(const struct _PKStrokePoint { double x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; }*)arg2;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })readStrokeIDFromArchive:(const struct StrokeID { int (**x1)(); unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; } x5; }*)arg1 withSortedUUIDs:(id)arg2;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })readV1StrokeIDFromArchive:(const struct StrokeID { int (**x1)(); unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; } x5; }*)arg1 withSortedUUIDs:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderBounds;
- (void)saveInksTo:(id)arg1;
- (void)saveStrokeID:(const struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; }*)arg1 toArchive:(struct StrokeID { int (**x1)(); unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; } x5; }*)arg2 withSortedUUIDs:(id)arg3;
- (void)saveToArchive:(void*)arg1;
- (unsigned int)saveToArchive:(void*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(bool)arg4 parent:(id)arg5 transient:(bool)arg6;
- (unsigned int)saveToArchive:(void*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(bool)arg4 transient:(bool)arg5;
- (unsigned int)saveToV1Archive:(void*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(bool)arg4 transient:(bool)arg5;
- (void)saveUUIDsTo:(id)arg1;
- (void)saveV1StrokeID:(const struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; }*)arg1 toArchive:(struct StrokeID { int (**x1)(); unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; } x5; }*)arg2 withSortedUUIDs:(id)arg3;
- (void)setInk:(id)arg1;
- (void)setPath:(id)arg1;
- (void)set_sortID:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (void)set_substrokes:(id)arg1;
- (void)set_substrokesVersion:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (void)set_version:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (id)sliceIdentifierForTStart:(double)arg1 tEnd:(double)arg2;
- (id)strokeApplying:(id)arg1;

@end
