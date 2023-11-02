
@interface GQDLSDocument : GQDRoot {
    GQDSStylesheet * mStylesheet;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;

- (struct __CFString { }*)createUpgradedAppBundleResourcePath:(struct __CFString { }*)arg1;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2 fileUrl:(struct __CFURL { }*)arg3;
- (void)dealloc;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL { }*)arg1;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;

@end
