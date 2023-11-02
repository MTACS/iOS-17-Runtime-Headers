
@interface WFWallpaperModificationAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (id)localizedAccessResourceErrorString;
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)arg1;
- (id)name;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
