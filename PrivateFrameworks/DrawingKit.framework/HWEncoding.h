
@interface HWEncoding : NSObject

+ (id)decodeHandwritingFromData:(id)arg1;
+ (id)decodedBrushStrokesWithData:(id)arg1 inCanvasBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inStrokesFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 strokeDataFieldCount:(unsigned int)arg4 count:(unsigned long long)arg5;
+ (id)encodeBrushStrokesAsData:(id)arg1 inCanvasBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inStrokesFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)encodeHandwriting:(id)arg1 compress:(bool)arg2;
+ (id)protoDrawingFromDrawing:(id)arg1 compress:(bool)arg2;
+ (id)protoMessageFromHandwriting:(id)arg1;
+ (void)writeDataToDisk:(id)arg1 withName:(id)arg2;

@end
