
@interface AMSHTTPArchiveController : NSObject

+ (bool)_disabled;
+ (id)_harURLFilters;
+ (bool)_shouldAddRequest:(id)arg1;
+ (void)_updateHarFileFilters;
+ (void)addHTTPArchive:(id)arg1;
+ (id)harURLFilters;
+ (void)initialize;
+ (bool)isRemoveDisabled;
+ (id)maxBufferSizeOverride;
+ (void)setMaxBufferSizeOverride:(id)arg1;
+ (void)setRemoveDisabled:(bool)arg1;

@end
