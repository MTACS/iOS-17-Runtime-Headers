
@interface FPItemDecoration : NSObject {
    NSString * _bundleIdentifier;
    NSString * _decorationIdentifier;
    bool  _dependsOnParent;
    bool  _dependsOnStyle;
    NSString * _imageType;
    FPStringFormat * _labelTitle;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *decorationIdentifier;
@property (nonatomic, readonly, copy) NSString *imageType;
@property (nonatomic, readonly) bool requiresFetchingInfoFirst;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)_decorationCache;
+ (id)_fetchFromCacheWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)_invalidateCache;
+ (void)_loadBuiltinDecorationTypes;
+ (id)_loadDecorationsFromPlist:(id)arg1 bundleIdentifier:(id)arg2 bundle:(struct __CFBundle { }*)arg3;
+ (id)decorationWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)fetchInfoForItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)infoForItem:(id)arg1 parentInfo:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)decorationIdentifier;
- (id)description;
- (void)folderStatusForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)imageType;
- (id)initWithPlistEntry:(id)arg1 bundle:(struct __CFBundle { }*)arg2 bundleIdentifier:(id)arg3;
- (id)labelWithInfo:(id)arg1 error:(id*)arg2;
- (id)labelWithInfo:(id)arg1 error:(id*)arg2 style:(unsigned long long)arg3;
- (id)labelWithItem:(id)arg1 error:(id*)arg2;
- (id)labelWithItem:(id)arg1 error:(id*)arg2 style:(unsigned long long)arg3;
- (id)labelsWithInfo:(id)arg1 error:(id*)arg2;
- (id)labelsWithItem:(id)arg1 error:(id*)arg2;
- (id)parentDependingKeys;
- (bool)requiresFetchingInfoFirst;
- (id)styleDependingKeys;
- (id)type;

@end
