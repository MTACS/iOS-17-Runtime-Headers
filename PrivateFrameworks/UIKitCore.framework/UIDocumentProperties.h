
@interface UIDocumentProperties : NSObject {
    LPMetadataProvider * __metadataProvider;
    id /* block */  __wantsIconRepresentationChangedHandler;
    id /* block */  _activityViewControllerProvider;
    UINavigationItem * _associatedNavigationItem;
    id /* block */  _dragItemsProvider;
    _UIDocumentPropertiesHeaderView * _headerView;
    UIAction * _iconRepresentationAction;
    _UIDocumentPropertiesIconView * _iconView;
    LPLinkMetadata * _metadata;
    NSURL * _url;
    _UIDocumentURLChangeObserver * _urlChangeObserver;
    bool  _wantsIconRepresentation;
}

@property (setter=_setAssociatedNavigationItem:, nonatomic) UINavigationItem *_associatedNavigationItem;
@property (setter=_setMetadata:, nonatomic, retain) LPLinkMetadata *_metadata;
@property (setter=_setMetadataProvider:, nonatomic, retain) LPMetadataProvider *_metadataProvider;
@property (nonatomic, readonly) NSURL *_representedURL;
@property (setter=_setWantsIconRepresentationChangedHandler:, nonatomic, copy) id /* block */ _wantsIconRepresentationChangedHandler;
@property (nonatomic, copy) id /* block */ activityViewControllerProvider;
@property (nonatomic, copy) id /* block */ dragItemsProvider;
@property (nonatomic) _UIDocumentPropertiesHeaderView *headerView;
@property (nonatomic, retain) UIAction *iconRepresentationAction;
@property (nonatomic) _UIDocumentPropertiesIconView *iconView;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) _UIDocumentURLChangeObserver *urlChangeObserver;
@property (nonatomic) bool wantsIconRepresentation;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_associatedNavigationItem;
- (void)_didLoadMetadata:(id)arg1;
- (void)_fetchMetadataIfNecessary:(bool)arg1;
- (id)_headerViewForMenuInteraction:(id)arg1 sourceViewProvider:(id /* block */)arg2;
- (id)_iconView;
- (id)_metadata;
- (id)_metadataProvider;
- (void)_performBlockAndCallIconRepresentationChangedHandlerIfNecessary:(id /* block */)arg1;
- (id)_placeholderMetadata;
- (id)_representedURL;
- (void)_setAssociatedNavigationItem:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setMetadataProvider:(id)arg1;
- (void)_setWantsIconRepresentationChangedHandler:(id /* block */)arg1;
- (void)_updateMetadataInUse;
- (id /* block */)_wantsIconRepresentationChangedHandler;
- (id /* block */)activityViewControllerProvider;
- (void)dealloc;
- (id /* block */)dragItemsProvider;
- (id)headerView;
- (id)iconRepresentationAction;
- (id)iconView;
- (id)initWithMetadata:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)metadata;
- (void)setActivityViewControllerProvider:(id /* block */)arg1;
- (void)setDragItemsProvider:(id /* block */)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setIconRepresentationAction:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlChangeObserver:(id)arg1;
- (void)setWantsIconRepresentation:(bool)arg1;
- (id)url;
- (id)urlChangeObserver;
- (bool)wantsIconRepresentation;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (id)initWithTitle:(id)arg1 iconProvider:(id)arg2 imageProvider:(id)arg3;

@end
