
@interface EBGraphic : NSObject

+ (int)objectTypeForShape:(id)arg1;
+ (void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3;
+ (id)readGraphicWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readGraphicsInChart:(id)arg1 state:(id)arg2;
+ (void)readGraphicsWithState:(id)arg1;
+ (void)readImage:(id)arg1 xlGraphicsInfo:(void*)arg2 state:(id)arg3;
+ (id)readMainChartWithState:(id)arg1;
+ (void)readNotesWithDictionary:(id)arg1 state:(id)arg2;
+ (void)readOle:(id)arg1 xlGraphicsInfo:(void*)arg2 state:(id)arg3;

@end
