
@interface CHBLegend : NSObject

+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)arg1;
+ (id)readCHDLegendEntryFrom:(const void*)arg1 state:(id)arg2;
+ (id)readFrom:(void*)arg1 state:(id)arg2;
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg1;

@end
