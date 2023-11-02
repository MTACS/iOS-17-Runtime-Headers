
@interface STIconCache : NSObject {
    NSMutableSet * _bundleIdentifiersWithPendingRequests;
    NSCache * _iconByKeyCache;
    NSObject<OS_dispatch_queue> * _lookupQueue;
    CNMonogrammer * _monogrammer;
    NSPersonNameComponentsFormatter * _personNameComponentsFormatter;
    NSURLSession * _urlSession;
}

@property (nonatomic, readonly) NSMutableSet *bundleIdentifiersWithPendingRequests;
@property (readonly) UIImage *imageForBlankApplicationIcon;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lookupQueue;
@property (nonatomic, retain) CNMonogrammer *monogrammer;
@property (nonatomic, retain) NSPersonNameComponentsFormatter *personNameComponentsFormatter;
@property (nonatomic, readonly) NSURLSession *urlSession;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_fetchFamilyPhotoWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchImageForAppInfoIfNeeded:(id)arg1;
- (void)_fetchImageForAppInfoIfNeeded:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_newCircleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;
- (id)_personImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)_updateCacheWithImage:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_updateCacheWithImage:(id)arg1 dsid:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3;
- (id)blankSpaceImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bundleIdentifiersWithPendingRequests;
- (id)circleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;
- (void)dealloc;
- (void)fetchPersonImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)imageForBlankApplicationIcon;
- (id)imageForBundleIdentifier:(id)arg1;
- (void)imageForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)imageForCategoryIdentifier:(id)arg1;
- (id)init;
- (id)lookupQueue;
- (id)monogramImageForInitial:(id)arg1 useDarkColors:(bool)arg2;
- (id)monogramImageForNameComponents:(id)arg1;
- (id)monogrammer;
- (id)personImageWithDSID:(id)arg1 fullName:(id)arg2;
- (id)personNameComponentsFormatter;
- (void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2;
- (id)roundedImageForImageWithName:(id)arg1;
- (void)setMonogrammer:(id)arg1;
- (void)setPersonNameComponentsFormatter:(id)arg1;
- (id)urlSession;

@end
