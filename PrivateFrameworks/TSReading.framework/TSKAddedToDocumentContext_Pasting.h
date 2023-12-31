
@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    struct __CFDictionary { } * mTableIDMap;
}

- (bool)autoUpdateSmartFields;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setTableIDMap:(struct __CFDictionary { }*)arg1;
- (bool)syncChanges;
- (struct __CFDictionary { }*)tableIDMap;
- (bool)uniqueBookmarks;
- (bool)wasPasted;

@end
