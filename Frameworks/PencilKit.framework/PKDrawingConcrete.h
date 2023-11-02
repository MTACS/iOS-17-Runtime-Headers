
@interface PKDrawingConcrete : PKDrawing {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __bounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __canvasBounds;
    NSMutableArray * _allStrokes;
    struct _PKStrokeID { 
        unsigned int clock; 
        unsigned char replicaUUID[16]; 
        unsigned int subclock; 
    }  _boundsVersion;
    NSUUID * _replicaUUID;
    NSMutableDictionary * _strokesIdentifierMap;
    struct shared_ptr<PKProtobufUnknownFields> { 
        struct PKProtobufUnknownFields {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _unknownFields;
    NSUUID * _uuid;
    PKVectorTimestamp * _version;
}

@property (setter=_setAllStrokes:, nonatomic, retain) NSMutableArray *_allStrokes;
@property (nonatomic, readonly) bool _hasReplicaUUID;
@property (nonatomic, readonly) struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields {} *x1; struct __shared_weak_count {} *x2; } _unknownFields;
@property (nonatomic) struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; } boundsVersion;
@property (nonatomic, readonly) NSUUID *nsuuid;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (nonatomic, retain) PKVectorTimestamp *version;

+ (id)_defaultConversionQueue;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_orientationTransform:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })newStrokeIDGreaterThan:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1 forUUID:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addTestDataToUnknownFields;
- (id)_allStrokes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_canvasBounds;
- (void)_collectAllStrokesIn:(id)arg1 into:(id)arg2;
- (double)_conversionScaleFactor;
- (id)_data;
- (id)_dataInUnknownFields;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })_drawingStrokeInfoIsLegacyDrawing:(bool)arg1;
- (bool)_hasReplicaUUID;
- (id)_initWithUnzippedData:(id)arg1 error:(id*)arg2;
- (id)_initWithUnzippedData:(id)arg1 loadNonInkingStrokes:(bool)arg2 error:(id*)arg3;
- (void)_mergeStroke:(id)arg1;
- (id)_newStroke:(id)arg1 withGroupID:(id)arg2;
- (id)_newStroke:(id)arg1 withInk:(id)arg2;
- (long long)_orientation;
- (struct CGSize { double x1; double x2; })_orientedDrawingSize;
- (void)_removeHiddenAndEraserStrokes;
- (void)_removeInvisibleStrokes;
- (id)_rootStrokes;
- (void)_setAllStrokes:(id)arg1;
- (void)_setUUID:(id)arg1;
- (id)_stroke:(id)arg1 transformed:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 concat:(bool)arg3;
- (id)_strokeForIdentifier:(id)arg1;
- (id)_strokesIdentifierMap;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields {} *x1; struct __shared_weak_count {} *x2; })_unknownFields;
- (struct CGSize { double x1; double x2; })_unscaledOrientedDrawingSize;
- (void)_updateStrokes:(id)arg1 updateBlock:(id /* block */)arg2;
- (void)_upgradeLegacyPenInks;
- (id)_upgradeOnQueue:(id)arg1 isLegacyDrawing:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)addNewStroke:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })boundsVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutInternalStrokes;
- (id)data;
- (id)dataRepresentation;
- (void)dealloc;
- (void)deleteStrokes:(id)arg1;
- (void)didMergeWithDrawing:(id)arg1;
- (void)didUpdate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const void*)arg1 loadNonInkingStrokes:(bool)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 loadNonInkingStrokes:(bool)arg2 error:(id*)arg3;
- (id)initWithDrawing:(id)arg1;
- (id)initWithLegacyArchive:(const void*)arg1;
- (id)initWithLegacyData:(id)arg1;
- (id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2;
- (id)initWithUUID:(id)arg1 strokes:(id)arg2 version:(id)arg3 canvasBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 boundsVersion:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg5 unknownFields:(struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields {} *x1; struct __shared_weak_count {} *x2; })arg6;
- (id)initWithV1Archive:(const void*)arg1 loadNonInkingStrokes:(bool)arg2;
- (id)initWithV1Data:(id)arg1 loadNonInkingStrokes:(bool)arg2;
- (void)invalidateStrokeBounds;
- (void)invalidateVisibleStrokes;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)newStroke;
- (struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })newStrokeIDGreaterThan:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (void)normalizeUUIDsWithDrawing:(id)arg1;
- (id)nsuuid;
- (id)replicaUUID;
- (long long)saveToArchive:(void*)arg1 withPathData:(bool)arg2;
- (unsigned int)saveToV1Archive:(void*)arg1 withPathData:(bool)arg2;
- (id)serialize;
- (id)serializeTransiently;
- (id)serializeWithVersion:(long long)arg1;
- (void)setBoundsVersion:(struct _PKStrokeID { unsigned int x1; unsigned char x2[16]; unsigned int x3; })arg1;
- (void)setStrokeSortIDForInsertion:(id)arg1;
- (void)setStrokes:(id)arg1 groupID:(id)arg2;
- (void)setStrokes:(id)arg1 hidden:(bool)arg2;
- (void)setStrokes:(id)arg1 inks:(id)arg2;
- (void)setVersion:(id)arg1;
- (void)set_canvasBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_orientation:(long long)arg1;
- (Class)strokeClass;
- (Class)strokeSelectionClass;
- (void)transformStrokes:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 concat:(bool)arg3;
- (id)undoableAddNewStrokes:(id)arg1;
- (id)undoableDeleteStrokes:(id)arg1;
- (id)undoableSetStrokes:(id)arg1 groupID:(id)arg2 actionName:(id)arg3;
- (id)undoableSetStrokes:(id)arg1 inks:(id)arg2;
- (id)undoableTransformStrokes:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 concat:(bool)arg3;
- (id)updateFromSlicedIntersectingIndexes:(long long*)arg1 resultNewRoots:(const id*)arg2 resultUpdatedStrokes:(const id*)arg3 count:(long long)arg4;
- (void)updateStroke:(id)arg1 indexHint:(unsigned long long)arg2;
- (void)updateStrokes:(id /* block */)arg1;
- (id)uuid;
- (id)v1SerializeWithPathData:(bool)arg1;
- (id)v1SerializeWithPathData:(bool)arg1 toVersion:(unsigned int*)arg2;
- (id)version;
- (id)visibleStrokeForInsertingStroke:(id)arg1;
- (void)willMergeWithDrawing:(id)arg1;

@end
