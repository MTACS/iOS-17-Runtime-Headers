
@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (bool)escherIsFullySupported;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (void)readEshClientAnchor:(const void*)arg1 targetClientData:(id)arg2 state:(id)arg3;
+ (void)setAutoInsetForShape:(void*)arg1;
+ (bool)tablesAreAllowed;
+ (bool)xmlEquivalentOfDrawableCanBeUsed;

@end
