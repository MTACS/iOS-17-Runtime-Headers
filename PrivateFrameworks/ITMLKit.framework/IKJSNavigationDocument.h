
@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {
    struct { 
        bool hasClear; 
        bool hasSetDocuments; 
        bool hasPresentModal; 
        bool hasDismissModal; 
    }  _delegateSelectors;
    <IKAppNavigationController> * _navigationControllerDelegate;
}

@property (readonly) NSString *OPTION_RETAIN_CONTEXT;
@property (nonatomic, readonly, retain) NSArray *documents;
@property (nonatomic, readonly) <IKAppNavigationController> *navigationControllerDelegate;

- (void).cxx_destruct;
- (id)OPTION_RETAIN_CONTEXT;
- (id)_makeAppDocumentWithDocument:(id)arg1;
- (void)_migrateMediaControllerFromDocument:(id)arg1 toDocument:(id)arg2;
- (void)clear;
- (void)dismissModal;
- (id)documents;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2;
- (void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
- (id)navigationControllerDelegate;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)presentModal:(id)arg1 :(id)arg2;
- (void)pushDocument:(id)arg1 :(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;
- (void)setDocuments:(id)arg1 :(id)arg2;

@end
