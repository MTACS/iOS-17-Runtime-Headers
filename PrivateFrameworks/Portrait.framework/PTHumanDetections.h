
@interface PTHumanDetections : NSObject {
    float  _deadzone;
    float  _deadzoneMax;
    struct PTHumanDetection { 
        int groupId; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*faceRect; 
    }  _detectionsFiltered;
    struct PTHumanDetection { 
        int groupId; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*faceRect; 
    }  _detectionsRaw;
    int  _detectionsRawCount;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _faceDetectionsFiltered;
    int  _faceDetectionsFilteredState;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _faceDetectionsRaw;
    float  _faceRectOverlapThreshold;
    PTUtil * _util;
}

@property (readonly) struct PTHumanDetection { int x1; float x2; bool x3[2]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x4[2]; }*detectionsFiltered;
@property (readonly) struct PTHumanDetection { int x1; float x2; bool x3[2]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x4[2]; }*detectionsRaw;
@property (readonly) int detectionsRawCount;
@property (readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**faceDetectionsFiltered;
@property (readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**faceDetectionsRaw;

- (void).cxx_destruct;
- (void)clearFilterDetections;
- (struct PTHumanDetection { int x1; float x2; bool x3[2]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x4[2]; }*)detectionsFiltered;
- (struct PTHumanDetection { int x1; float x2; bool x3[2]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x4[2]; }*)detectionsRaw;
- (int)detectionsRawCount;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)faceDetectionsFiltered;
- (int*)faceDetectionsFilteredState:(bool)arg1;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)faceDetectionsRaw;
- (void)filterDetections;
- (id)initWithMetalContext:(id)arg1;
- (void)renderDebugRects:(id)arg1 outTexture:(id)arg2 debugFaceRects:(bool)arg3;
- (void)reset;
- (void)unpackDetections:(id)arg1;

@end
