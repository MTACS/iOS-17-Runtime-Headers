
@interface SCNManipulator : NSObject {
    unsigned short  _action;
    union { 
        struct { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*originalPosition; 
        } axisMove; 
        struct { 
            void*originalPosition; 
        } planeMove; 
        struct { 
            float rotationSign; 
            void*originalRotation; 
        } axisRotate; 
    }  _actionData;
    bool  _alternateMode;
    SCNNode * _arcHandleXY;
    SCNNode * _arcHandleXZ;
    SCNNode * _arcHandleYZ;
    SCNNode * _arcHandles;
    SCNAuthoringEnvironment * _authoringEnvironment;
    SCNNode * _axis;
    SCNBillboardConstraint * _billboard;
    NSOrderedSet * _cloneSet;
    bool  _cloning;
    unsigned long long  _features;
    SCNNode * _highlightNode;
    bool  _isMouseDown;
    bool  _layoutLocked;
    SCNNode * _node;
    SCNNode * _occluder;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void**positions; 
    }  _originalData;
    unsigned int  _originalDataCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalMouseLocation;
    SCNNode * _planarTranslationHandleXY;
    SCNNode * _planarTranslationHandleXZ;
    SCNNode * _planarTranslationHandleYZ;
    SCNNode * _planarTranslationHandles;
    void _planarTranslationLayout;
    bool  _readonly;
    SCNNode * _rotationHandles;
    SCNNode * _scaleNode;
    SCNNode * _screenSpaceRotation;
    unsigned short  _selectedAxis;
    long long  _snapToAlignCount;
    struct { float x1; void *x2; float x3; } * _snapToAlignOnX;
    struct { float x1; void *x2; float x3; } * _snapToAlignOnY;
    struct { float x1; void *x2; float x3; } * _snapToAlignOnZ;
    NSMutableIndexSet * _snapXIndexes;
    NSMutableIndexSet * _snapYIndexes;
    NSMutableIndexSet * _snapZIndexes;
    NSOrderedSet * _targets;
    SCNNode * _translateHandles;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _worldInitialMatrix;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _worldMatrix;
    long long  _xAlignment;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xAxisToZAxisTransform;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xyPlaneToXZPlaneTransform;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _xyPlaneToYZPlaneTransform;
    long long  _yAlignment;
    union C3DMatrix4x4 { 
        float components[16]; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*m[4]; 
    }  _yAxisToZAxisTransform;
    long long  _zAlignment;
    SCNNode * _zArrow;
}

@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (nonatomic) unsigned long long features;
@property (readonly) SCNNode *manipulatorNode;
@property (nonatomic) bool readonly;
@property (nonatomic, retain) SCNNode *target;
@property (nonatomic, retain) NSOrderedSet *targets;
@property (readonly) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transform;
@property (nonatomic) long long xAlignment;
@property (nonatomic) long long yAlignment;
@property (nonatomic) long long zAlignment;

- (bool)_applyWithEvent:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (void)_deleteOriginalData;
- (unsigned long long)_effectiveFeatures;
- (void)_prepareSnapToAlignData:(void *)arg1 minOffset:(void *)arg2 maxOffset:(void *)arg3; // needs 3 arg types, found 1: unsigned short
- (void)_saveOriginalData;
- (void)_setAuthoringEnvironment:(id)arg1;
- (void)_snapPositionToAlign:(void *)arg1 original:(void *)arg2 unit:(void *)arg3 axisMove:(void *)arg4 rayStart:(void *)arg5 rayDir:(void *)arg6 didSnap:(void *)arg7 snapIndexes:(void *)arg8; // needs 8 arg types, found 5: struct SCNVector3 { float x1; float x2; float x3; }, double, bool, bool*, long long*
- (void)_updateActionWithEvent:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (void)_updateCloneStateWithEvent:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (void)addClonesToScene;
- (id)authoringEnvironment;
- (void)clearSnapIndexes;
- (id)copy;
- (void)dealloc;
- (void)editingSpaceChanged;
- (long long)effectiveEditingSpace;
- (unsigned long long)features;
- (id)hitTest:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (id)init;
- (bool)isDragging;
- (void)lockLayout;
- (id)manipulatorNode;
- (bool)mouseDown:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (bool)mouseDragged:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (bool)mouseMoved:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (bool)mouseUp:(struct { id x1; id x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; struct SCNVector3 { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; double x7; })arg1;
- (void)prepareSnapToAlignData;
- (void)prepareSnapToAlignDataIfNeeded;
- (bool)readonly;
- (void)removeClonesFromScene;
- (id)scene;
- (void)setAlternateMode:(bool)arg1;
- (void)setFeatures:(unsigned long long)arg1;
- (void)setReadonly:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargets:(id)arg1;
- (void)setXAlignment:(long long)arg1;
- (void)setYAlignment:(long long)arg1;
- (void)setZAlignment:(long long)arg1;
- (id)setupClones;
- (void)setupNode;
- (id)snapGuideIndexesOnAxis:(unsigned long long)arg1;
- (const struct { float x1; void *x2; float x3; }*)snapInfoAtIndex:(unsigned long long)arg1 axis:(unsigned long long)arg2;
- (id)target;
- (id)targets;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (void)unhighlightSelectedNode;
- (void)unlockLayout;
- (void)updateItemsPosition;
- (void)updateItemsRotation;
- (void)updateItemsScale:(float)arg1;
- (void)updateManipulatorComponents;
- (void)updateManipulatorNode;
- (void)updateManipulatorPosition:(struct __C3DEngineContext { }*)arg1;
- (void)validateClones;
- (long long)xAlignment;
- (long long)yAlignment;
- (long long)zAlignment;

@end
