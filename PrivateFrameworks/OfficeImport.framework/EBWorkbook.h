
@interface EBWorkbook : NSObject

+ (void*)createSheetNamesFromWorkbook:(id)arg1;
+ (void)readDocumentPresentation:(id)arg1 state:(id)arg2;
+ (void)readDocumentProperties:(id)arg1 state:(id)arg2;
+ (id)readWithState:(id)arg1 reader:(id)arg2;
+ (void)setupProcessors:(id)arg1;
+ (int)xlSheetTypeEnumFromEDSheet:(id)arg1;

@end
