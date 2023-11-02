
@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;
- (void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;
- (void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)domStorageItemsClearedWithStorageId:(id)arg1;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (void)safe_domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;
- (void)safe_domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;
- (void)safe_domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)safe_domStorageItemsClearedWithStorageId:(id)arg1;

@end
