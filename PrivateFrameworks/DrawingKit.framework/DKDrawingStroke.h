
@interface DKDrawingStroke : NSObject <NSCopying> {
    NSMutableArray * _strokePoints;
}

@property (readonly) NSMutableArray *strokePoints;

+ (id)drawingStrokeWithData:(id)arg1 count:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_decodeDKEncodedDrawingPointDataAsArray:(id)arg1 count:(long long)arg2;
- (id)_encodePointsDrawingPointData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedBrushStroke;
- (id)init;
- (id)strokePoints;

@end
