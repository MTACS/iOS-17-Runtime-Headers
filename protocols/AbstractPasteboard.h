
@protocol AbstractPasteboard <NSObject>

@required

- (long long)changeCount;
- (NSData *)dataForPasteboardType:(NSString *)arg1;
- (NSArray *)dataForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;
- (NSArray *)itemProviders;
- (long long)numberOfItems;
- (NSArray *)pasteboardTypes;
- (void)setItemProviders:(NSArray *)arg1;
- (NSArray *)valuesForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;

@optional

- (NSArray *)allDroppedFileURLs;
- (void)clearRegistrationLists;
- (NSArray *)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id*)arg2;
- (long long)numberOfFiles;
- (void)setItems:(NSArray *)arg1;
- (void)stageRegistrationLists:(NSArray *)arg1;
- (NSArray *)takeRegistrationLists;
- (void)updateSupportedTypeIdentifiers:(NSArray *)arg1;

@end
