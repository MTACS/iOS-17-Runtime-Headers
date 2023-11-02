
@interface DocumentUnderstanding.FilesDocumentIngester : NSObject

+ (id)getEffectiveFileExtensionForURLWithFileURL:(id)arg1;
+ (id)ingestDocumentFromFileWithFileURL:(id)arg1;
+ (id)openiWorkFileWithFileURL:(id)arg1;
+ (id)readFromJsonWithFileURL:(id)arg1;
+ (id)readFromOfficeWithFileURL:(id)arg1;
+ (id)readFromPDFWithFileURL:(id)arg1;
+ (id)readFromTextWithFileURL:(id)arg1;
+ (id)readFromiWorkWithFileURL:(id)arg1;

- (id)init;

@end
