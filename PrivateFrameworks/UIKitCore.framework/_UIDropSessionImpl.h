
@interface _UIDropSessionImpl : NSObject <UIDropSession, _UIDragDropSessionInternal, _UIDropSessionPrivate> {
    NSArray * _items;
    <UIDragSession> * _localDragSession;
    unsigned long long  _progressIndicatorStyle;
    _UIInternalDraggingSessionDestination * _sessionDestination;
}

@property (getter=_allowsItemsToUpdate, nonatomic, readonly) bool _allowsItemsToUpdate;
@property (nonatomic, readonly) long long _dataOwner;
@property (nonatomic, readonly) unsigned int _sessionIdentifier;
@property (nonatomic, readonly) bool allowsMoveOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_drivenByPointer, nonatomic, readonly) bool drivenByPointer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) <UIDragSession> *localDragSession;
@property (getter=_operationMask, nonatomic, readonly) unsigned long long operationMask;
@property (readonly) NSProgress *progress;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (getter=isRestrictedToDraggingApplication, nonatomic, readonly) bool restrictedToDraggingApplication;
@property (nonatomic, readonly) _UIInternalDraggingSessionDestination *sessionDestination;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowsItemsToUpdate;
- (id)_createItemsOfClass:(Class)arg1 synchronouslyIfPossible:(bool)arg2 completion:(id /* block */)arg3;
- (long long)_dataOwner;
- (bool)_drivenByPointer;
- (id)_internalSession;
- (void)_itemsNeedUpdate:(id)arg1;
- (unsigned long long)_operationMask;
- (struct CGPoint { double x1; double x2; })_previewCenterForVisibleItem:(id)arg1 inView:(id)arg2;
- (struct CGSize { double x1; double x2; })_previewSizeForVisibleItem:(id)arg1;
- (unsigned int)_sessionIdentifier;
- (bool)allowsMoveOperation;
- (bool)canLoadObjectsOfClass:(Class)arg1;
- (bool)hasItemsConformingToTypeIdentifiers:(id)arg1;
- (id)initWithSessionDestination:(id)arg1;
- (bool)isRestrictedToDraggingApplication;
- (id)items;
- (id)loadObjectsOfClass:(Class)arg1 completion:(id /* block */)arg2;
- (id)localDragSession;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)progress;
- (unsigned long long)progressIndicatorStyle;
- (void)requestVisibleItems:(id /* block */)arg1;
- (id)sessionDestination;
- (void)setProgressIndicatorStyle:(unsigned long long)arg1;

@end
