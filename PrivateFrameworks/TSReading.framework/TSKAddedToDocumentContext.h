
@interface TSKAddedToDocumentContext : NSObject

+ (id)changeTrackingSubstorageForCopyContext;
+ (id)dragCopyContext;
+ (id)dragMoveContext;
+ (id)exportFootnoteContext;
+ (id)importingContextWithImporterID:(id)arg1;
+ (id)importingMasterTemplateContextWithImporterID:(id)arg1;
+ (id)insertingPrototypeContext;
+ (id)movingContext;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)unarchivingContext;
+ (id)undoDeleteContext;
+ (id)unhidingContext;

- (bool)autoUpdateSmartFields;
- (bool)changeTrackingSubstorage;
- (bool)exportingFootnotes;
- (id)importerID;
- (bool)invokeDOLC;
- (bool)matchStyle;
- (void)setTableIDMap:(struct __CFDictionary { }*)arg1;
- (bool)syncChanges;
- (struct __CFDictionary { }*)tableIDMap;
- (id)undoContext;
- (bool)uniqueBookmarks;
- (bool)wasDragMoved;
- (bool)wasDragOperation;
- (bool)wasImported;
- (bool)wasImportedFromMasterTemplate;
- (bool)wasMoved;
- (bool)wasPasted;
- (bool)wasUnarchived;
- (bool)wasUndoDelete;
- (bool)wasUnhidden;

@end
