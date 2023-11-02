
@interface EBLinkTable : NSObject

+ (void*)createXlLinkTableFromLinksCollection:(id)arg1 workbook:(id)arg2 state:(id)arg3;
+ (int)mapEDLinkTypeToXl:(int)arg1;
+ (int)mapXlLinkTypeToED:(int)arg1;
+ (void)readFromState:(id)arg1;

@end
