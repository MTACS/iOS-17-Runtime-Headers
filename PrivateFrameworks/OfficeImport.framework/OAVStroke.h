
@interface OAVStroke : NSObject

+ (void)initialize;
+ (unsigned char)readCapStyle:(id)arg1;
+ (unsigned char)readCompoundType:(id)arg1;
+ (void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (id)readFromManager:(id)arg1;
+ (void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (unsigned char)readLineEndLength:(id)arg1;
+ (unsigned char)readLineEndType:(id)arg1;
+ (unsigned char)readLineEndWidth:(id)arg1;
+ (id)readLineEndWithType:(id)arg1 width:(id)arg2 length:(id)arg3;
+ (BOOL)readPresetDashStyle:(id)arg1;
+ (id)targetFgColorWithManager:(id)arg1;

@end
