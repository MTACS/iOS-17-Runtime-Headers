
@interface PTFocusBlurMap : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _autoFocusRect;
    struct PTFigCaptureStreamFocusBlurMap { unsigned char x1; struct PTFigCaptureStreamFocusBlurMapHeader { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; unsigned short x_2_1_5; unsigned short x_2_1_6; unsigned short x_2_1_7; unsigned short x_2_1_8; unsigned short x_2_1_9; unsigned short x_2_1_10; unsigned short x_2_1_11; unsigned char x_2_1_12; unsigned char x_2_1_13; unsigned char x_2_1_14; unsigned char x_2_1_15; unsigned char x_2_1_16; unsigned char x_2_1_17; float x_2_1_18; float x_2_1_19; } x2; struct PTFigCaptureStreamFocusBlurMapTile { short x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7; } x3[512]; } * _map;
    unsigned long long  _sensorHeight;
    unsigned long long  _sensorWidth;
    unsigned long long  _validHeight;
    unsigned long long  _validWidth;
    unsigned long long  _validX;
    unsigned long long  _validY;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } autoFocusRect;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusValidNormalizedRect;
@property (readonly) NSIndexSet *inFocusRegion;
@property (readonly) unsigned long long inputHeight;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputValidNormalizedRect;
@property (readonly) unsigned long long inputWidth;
@property (readonly) unsigned long long inputX;
@property (readonly) unsigned long long inputY;
@property (readonly) NSIndexSet *largestFocusRegion;
@property (readonly) unsigned long long sensorHeight;
@property (readonly) unsigned long long sensorWidth;
@property (readonly) unsigned long long tileCountX;
@property (readonly) unsigned long long tileCountY;
@property (readonly) unsigned long long tileHeight;
@property (readonly) unsigned long long tileWidth;
@property (readonly) unsigned long long validHeight;
@property (readonly) unsigned long long validWidth;
@property (readonly) unsigned long long validX;
@property (readonly) unsigned long long validY;

- (id)_blurExtendedNodes:(id)arg1 blurMin:(int)arg2 blurMax:(int)arg3;
- (id)_blurExtendedNodes:(id)arg1 options:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boxFromComponent:(id)arg1;
- (id)_connectedComponentWithNode:(unsigned long long)arg1 unvisited:(id)arg2;
- (id)_connectedComponents:(id)arg1;
- (void)_getBlurRangeOfNodes:(id)arg1 blurMin:(int*)arg2 blurMax:(int*)arg3;
- (id)_inFocusNodes;
- (void)_initValidRectFromSensorWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inputSensorPixelRect;
- (id)_largestOfComponents:(id)arg1;
- (id)_nodesBetweenBlurMin:(int)arg1 blurMax:(int)arg2;
- (id)_nodesForNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_nodesFromTileRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalRectFromPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pixelRectFromNormalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sensorPixelRectFromRegion:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sensorPixelRectFromTileRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tileRectFromNodes:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tileRectFromSensorPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_validNormalizedRectFromSensorPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autoFocusRect;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusValidNormalizedRect;
- (id)inFocusRegion;
- (id)init;
- (id)initWithFocusBlurMapData:(id)arg1 sensorSize:(struct CGSize { double x1; double x2; })arg2 validSensorRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithFocusBlurMapDictionary:(id)arg1;
- (unsigned long long)inputHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputValidNormalizedRect;
- (unsigned long long)inputWidth;
- (unsigned long long)inputX;
- (unsigned long long)inputY;
- (id)largestFocusRegion;
- (unsigned long long)sensorHeight;
- (unsigned long long)sensorWidth;
- (void)setAutoFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)tileCountX;
- (unsigned long long)tileCountY;
- (unsigned long long)tileHeight;
- (unsigned long long)tileWidth;
- (unsigned long long)tileXForTile:(unsigned long long)arg1;
- (unsigned long long)tileYForTile:(unsigned long long)arg1;
- (unsigned long long)validHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })validNormalizedRectFromRegion:(id)arg1;
- (unsigned long long)validWidth;
- (unsigned long long)validX;
- (unsigned long long)validY;

@end
