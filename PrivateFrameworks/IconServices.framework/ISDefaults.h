
@interface ISDefaults : NSObject {
    NSURL * __cacheURL;
    bool  __enable1016Icons;
    bool  __enableAppIconOverrides;
    bool  __ignoreDocumentClaimIcons;
    NSNumber * __usePerstentCache;
    NSString * _cacheSaltString;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _serviceName;
}

@property (retain) NSURL *_cacheURL;
@property (readonly) bool _enable1016Icons;
@property (readonly) bool _enableAppIconOverrides;
@property (readonly) bool _ignoreDocumentClaimIcons;
@property (retain) NSNumber *_usePerstentCache;
@property (readonly) bool allowDocumentClaimIcons;
@property (readonly) NSString *cacheSaltString;
@property (readonly) NSURL *cacheURL;
@property (readonly) bool defaultToTemplatizedAppIcons;
@property (readonly) bool enableAppIconOverides;
@property (readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) bool logMissingURLCacheProperties;
@property (readonly) bool preferSymbolAsTemplateVariant;
@property (readonly) double prepareImageDelay;
@property (readonly) NSString *serviceName;
@property (readonly) bool usePerstentCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cacheURL;
- (bool)_enable1016Icons;
- (bool)_enableAppIconOverrides;
- (bool)_ignoreDocumentClaimIcons;
- (id)_usePerstentCache;
- (bool)allowDocumentClaimIcons;
- (id)cacheSaltString;
- (id)cacheURL;
- (id)debugGraphicIconColor;
- (id)debugISIconGraphicIconColor;
- (id)debugPreDefinedGraphicIconColor;
- (bool)defaultToTemplatizedAppIcons;
- (bool)enableAppIconOverides;
- (id)init;
- (bool)isDebugGraphicIconColourEnabled;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)logMissingURLCacheProperties;
- (bool)preferSymbolAsTemplateVariant;
- (double)prepareImageDelay;
- (id)serviceName;
- (void)set_cacheURL:(id)arg1;
- (void)set_usePerstentCache:(id)arg1;
- (bool)usePerstentCache;

@end
