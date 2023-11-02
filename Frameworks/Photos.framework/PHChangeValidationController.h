
@interface PHChangeValidationController : NSObject {
    NSArray * _albumsToDelete;
    NSArray * _assetsToChangeContent;
    NSArray * _assetsToDelete;
    NSArray * _assetsToHide;
    NSArray * _assetsToRevert;
    NSString * _clientName;
    bool  _confirmationRequired;
    NSOrderedSet * _deleteRequests;
    bool  _didPrepare;
    NSArray * _foldersToDelete;
    NSOrderedSet * _insertRequests;
    NSManagedObjectContext * _managedObjectContext;
    PLPhotoLibrary * _photoLibrary;
    NSArray * _renderedContentURLs;
    NSOrderedSet * _updateRequests;
}

@property (nonatomic, readonly) NSArray *albumsToDelete;
@property (nonatomic, readonly) NSArray *assetsToChangeContent;
@property (nonatomic, readonly) NSArray *assetsToDelete;
@property (nonatomic, readonly) NSArray *assetsToHide;
@property (nonatomic, readonly) NSArray *assetsToRevert;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly) bool confirmationRequired;
@property (nonatomic, readonly) NSOrderedSet *deleteRequests;
@property (nonatomic, readonly) NSArray *foldersToDelete;
@property (nonatomic, readonly) NSOrderedSet *insertRequests;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSArray *renderedContentURLs;
@property (nonatomic, readonly) NSOrderedSet *updateRequests;

- (void).cxx_destruct;
- (id)_failureWithError:(id)arg1;
- (id)_prepare;
- (bool)_promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 extensionItem:(id)arg5;
- (bool)_recordObjectID:(id)arg1 withSimpleDeleteValidators:(id)arg2;
- (id)_simpleDeleteValidatorsWithManagedObjectContext:(id)arg1;
- (id)_validateSimpleDeletionsWithValidators:(id)arg1 requestsByObjectID:(id)arg2;
- (id)albumsToDelete;
- (id)assetsToChangeContent;
- (id)assetsToDelete;
- (id)assetsToHide;
- (id)assetsToRevert;
- (id)clientName;
- (bool)confirmationRequired;
- (id)deleteRequests;
- (id)foldersToDelete;
- (id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5;
- (id)insertRequests;
- (id)managedObjectContext;
- (id)photoLibrary;
- (bool)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;
- (bool)promptForUserConfirmationWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 previewAssetLocalIdentifiers:(id)arg5;
- (id)renderedContentURLs;
- (id)updateRequests;
- (id)validate;

@end
