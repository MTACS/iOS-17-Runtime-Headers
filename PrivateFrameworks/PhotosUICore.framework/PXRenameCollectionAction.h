
@interface PXRenameCollectionAction : PXPhotosAction {
    PHCollection * _collection;
    unsigned long long  _collectionType;
    NSString * _currentTitle;
    NSString * _redoTitle;
    NSString * _undoTitle;
}

@property (nonatomic, readonly) PHCollection *collection;
@property (nonatomic, readonly) unsigned long long collectionType;
@property (nonatomic, copy) NSString *currentTitle;
@property (nonatomic, readonly, copy) NSString *redoTitle;
@property (nonatomic, readonly, copy) NSString *undoTitle;

+ (id)_actionNameLocalizationKeyForCollectionType:(unsigned long long)arg1;
+ (unsigned long long)_renameTypeForCollection:(id)arg1;
+ (id)actionNameForCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_changeTitle:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)collection;
- (unsigned long long)collectionType;
- (id)currentTitle;
- (id)initWithCollection:(id)arg1 title:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)redoTitle;
- (void)setCurrentTitle:(id)arg1;
- (id)undoTitle;

@end
