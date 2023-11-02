
@interface OISpotlightImporter : NSObject

- (void)addPackagePropertiesFromReader:(id)arg1 toSearchableAttributes:(id)arg2;
- (id)init;
- (id)searchableAttributesForOfficeFileAtURL:(id)arg1 error:(id*)arg2;
- (id)searchableAttributesForXMLOfficeFileOfType:(unsigned long long)arg1 atURL:(id)arg2 error:(id*)arg3;
- (id)sheetNamesFromWorkbookPart:(id)arg1;
- (id)textContentForReader:(id)arg1 withType:(unsigned long long)arg2;
- (id)textContentFromExcelReader:(id)arg1;
- (id)textContentFromPowerPointReader:(id)arg1;
- (id)textContentFromWordReader:(id)arg1;
- (id)textFromElementsNamed:(const char *)arg1 skippingElementsNamed:(const char *)arg2 insertingNewlinesOnElementsNamed:(const char *)arg3 tabulationsOnElementsNamed:(const char *)arg4 inNamespaces:(const char **)arg5 inPackagePart:(id)arg6;

@end
