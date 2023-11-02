
@interface OABStroke : NSObject

+ (unsigned char)readCapStyle:(int)arg1;
+ (unsigned char)readCompoundType:(int)arg1;
+ (unsigned char)readLineEndLength:(int)arg1;
+ (unsigned char)readLineEndType:(int)arg1;
+ (unsigned char)readLineEndWidth:(int)arg1;
+ (id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
+ (BOOL)readPresetDashStyle:(int)arg1;
+ (id)readStrokeFromShapeBaseManager:(id)arg1 state:(id)arg2;
+ (int)writeCapStyle:(unsigned char)arg1;
+ (int)writeCompoundType:(unsigned char)arg1;
+ (int)writeLineEndLength:(unsigned char)arg1;
+ (int)writeLineEndType:(unsigned char)arg1;
+ (int)writeLineEndWidth:(unsigned char)arg1;
+ (int)writePresetDashStyle:(BOOL)arg1;
+ (void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(struct EshStroke { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2 state:(id)arg3;

@end
