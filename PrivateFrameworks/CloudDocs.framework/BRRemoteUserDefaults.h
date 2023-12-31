
@interface BRRemoteUserDefaults : NSObject {
    NSMutableDictionary * _userDictionaryCache;
}

@property (nonatomic, readonly) NSSet *excludedExtensionsWorthPreserving;
@property (nonatomic, readonly) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (nonatomic, readonly) long long minFileSizeForThumbnailTransfer;

+ (id)defaultExcludedExtensionsWorthPreserving;
+ (id)defaultExcludedFilenamesWorthPreserving;
+ (id)defaultExcludedFilenamesWorthWarningAtLogout;
+ (id)sharedDefaults;

- (void).cxx_destruct;
- (id)_init;
- (id)excludedExtensionsWorthPreserving;
- (id)excludedFilenamesWorthWarningAtLogout;
- (id)init;
- (long long)minFileSizeForThumbnailTransfer;

@end
