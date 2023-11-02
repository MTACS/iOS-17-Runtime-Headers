
@interface QLThumbnailUTICache : NSObject {
    NSMutableDictionary * _itemTypeCache;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
    NSMutableDictionary * _useExtensionCache;
}

@property (nonatomic, retain) NSMutableDictionary *itemTypeCache;
@property (nonatomic, retain) NSMutableDictionary *useExtensionCache;

+ (id)_iWorkUTIs;
+ (bool)contentType:(id)arg1 conformsToContentTypeInArray:(id)arg2;
+ (bool)contentTypeIdentifier:(id)arg1 conformsToContentTypeIdentifierInArray:(id)arg2;
+ (bool)contentTypeIsIWorkType:(id)arg1;
+ (id)iWorkTypes;
+ (id)sharedCache;

- (void).cxx_destruct;
- (bool)_contentTypeShouldBeHandledByAppleExtension:(id)arg1;
- (unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1;
- (id)init;
- (id)itemTypeCache;
- (unsigned long long)itemTypeForContentType:(id)arg1;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (bool)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2;
- (void)setItemTypeCache:(id)arg1;
- (void)setUseExtensionCache:(id)arg1;
- (id)useExtensionCache;
- (bool)useExtensionForContentType:(id)arg1;
- (bool)useExtensionForItem:(id)arg1;
- (bool)useExtensionUncachedForContentType:(id)arg1;

@end
