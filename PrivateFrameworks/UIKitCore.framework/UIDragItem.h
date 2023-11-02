
@interface UIDragItem : NSObject {
    unsigned long long  __managementState;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  __suggestedTransform;
    bool  _deferPreviewUpdates;
    <_UIDragSetDownAnimationTarget> * _destinationVisualTarget;
    bool  _dirty;
    <_UIDragDropSessionInternal> * _dragDropSession;
    _UIDragPreviewBlockProvider * _dragPreviewBlockProvider;
    NSItemProvider * _itemProvider;
    id  _localObject;
    unsigned long long  _preferredPreviewType;
    id /* block */  _previewProvider;
    id  _privateLocalContext;
    <_UIDragSetDownAnimationTarget> * _sourceVisualTarget;
    UITargetedDragPreview * _targetedLiftPreview;
    unsigned long long  _updatedPreviewType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _visibleDropItemCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _visibleDropItemSize;
}

@property (setter=_setDraggedTextRange:, nonatomic, retain) UITextRange *_draggedTextRange;
@property (nonatomic) unsigned long long _managementState;
@property (nonatomic, readonly) WebBookmark *_sf_localBookmark;
@property (nonatomic, readonly) WBTabGroup *_sf_localTabGroup;
@property (nonatomic, readonly) NSURL *_sf_localURL;
@property (nonatomic, readonly) SFTabStateData *_sf_tabStateData;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } _suggestedTransform;
@property (getter=_deferPreviewUpdates, setter=_setDeferPreviewUpdates:, nonatomic) bool deferPreviewUpdates;
@property (getter=_destinationVisualTarget, setter=_setDestinationVisualTarget:, nonatomic) <_UIDragSetDownAnimationTarget> *destinationVisualTarget;
@property (getter=_isDirty, setter=_setDirty:, nonatomic) bool dirty;
@property (getter=_dragDropSession, setter=_setDragDropSession:, nonatomic) <_UIDragDropSessionInternal> *dragDropSession;
@property (nonatomic, retain) _UIDragPreviewBlockProvider *dragPreviewBlockProvider;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, retain) id localObject;
@property (nonatomic) unsigned long long preferredPreviewType;
@property (nonatomic, copy) id /* block */ previewProvider;
@property (getter=_privateLocalContext, setter=_setPrivateLocalContext:, nonatomic, retain) id privateLocalContext;
@property (nonatomic, readonly) WBTab *safari_localWBTab;
@property (getter=_sourceVisualTarget, setter=_setSourceVisualTarget:, nonatomic) <_UIDragSetDownAnimationTarget> *sourceVisualTarget;
@property (getter=_targetedLiftPreview, nonatomic, retain) UITargetedDragPreview *targetedLiftPreview;
@property (nonatomic) unsigned long long updatedPreviewType;
@property (getter=_visibleDropItemCenter, setter=_setVisibleDropItemCenter:, nonatomic) struct CGPoint { double x1; double x2; } visibleDropItemCenter;
@property (getter=_visibleDropItemSize, setter=_setVisibleDropItemSize:, nonatomic) struct CGSize { double x1; double x2; } visibleDropItemSize;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_chiclet;
- (id)_currentPreviewProvider;
- (bool)_deferPreviewUpdates;
- (id)_destinationVisualTarget;
- (id)_dragDropSession;
- (id)_draggedTextRange;
- (bool)_isDirty;
- (void)_loadOriginalImageComponentProvider;
- (unsigned long long)_managementState;
- (void)_previewNeedsUpdateForType:(unsigned long long)arg1;
- (id)_previewProviderForType:(unsigned long long)arg1;
- (id)_privateLocalContext;
- (void)_setDeferPreviewUpdates:(bool)arg1;
- (void)_setDestinationVisualTarget:(id)arg1;
- (void)_setDirty:(bool)arg1;
- (void)_setDragDropSession:(id)arg1;
- (void)_setDraggedTextRange:(id)arg1;
- (void)_setPrivateLocalContext:(id)arg1;
- (void)_setSourceVisualTarget:(id)arg1;
- (void)_setVisibleDropItemCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setVisibleDropItemSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_sourceVisualTarget;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_suggestedTransform;
- (id)_targetedLiftPreview;
- (id)_uicmi_getAssociatedMenuIdentifier;
- (void)_uicmi_setAssociatedMenuIdentifier:(id)arg1;
- (void)_updatePreferredPreview;
- (struct CGPoint { double x1; double x2; })_visibleDropItemCenter;
- (struct CGSize { double x1; double x2; })_visibleDropItemSize;
- (id)dragPreviewBlockProvider;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (id)localObject;
- (unsigned long long)preferredPreviewType;
- (id /* block */)previewProvider;
- (void)setDragPreviewBlockProvider:(id)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setPreferredPreviewType:(unsigned long long)arg1;
- (void)setPreviewProvider:(id /* block */)arg1;
- (void)setTargetedLiftPreview:(id)arg1;
- (void)setUpdatedPreviewType:(unsigned long long)arg1;
- (void)set_managementState:(unsigned long long)arg1;
- (void)set_suggestedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (unsigned long long)updatedPreviewType;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_itemWithTabGroup:(id)arg1;
+ (id)_sf_itemWithTabStateData:(id)arg1 userActivity:(id)arg2;
+ (void)_sf_loadObjectsFromDragItems:(id)arg1 usingLocalObjectLoader:(int (*)arg2 objectLoader:(int (*)arg3 completionHandler:(id /* block */)arg4;

- (id)_sf_initWithBookmark:(id)arg1;
- (id)_sf_initWithSiriSuggestion:(id)arg1;
- (id)_sf_localBookmark;
- (id)_sf_localTabGroup;
- (id)_sf_localURL;
- (id)_sf_tabStateData;
- (id)safari_localWBTab;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (id)safari_fluidCollectionViewSourceIndexPath;
- (void)safari_setFluidCollectionViewSourceIndexPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)sbh_appDragLocalContext;
- (void)sbh_setAppDragLocalContext:(id)arg1;

@end
