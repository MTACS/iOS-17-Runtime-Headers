
@interface UINib : NSObject {
    id  storage;
}

+ (id)nibWithData:(id)arg1 bundle:(id)arg2;
+ (id)nibWithNibName:(id)arg1 bundle:(id)arg2;

- (void).cxx_destruct;
- (void)_registerForMemoryWarningIfNeeded;
- (id)bundleResourcePath;
- (bool)captureEnclosingNIBBundleOnDecode;
- (bool)captureImplicitLoadingContextOnDecode;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)effectiveBundle;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierForStringsFile;
- (id)initWithBundle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3;
- (id)instantiateWithOwner:(id)arg1 options:(id)arg2;
- (bool)instantiatingForSimulator;
- (id)lazyArchiveData;
- (id)nibDataForPath:(id)arg1;
- (void)setCaptureEnclosingNIBBundleOnDecode:(bool)arg1;
- (void)setCaptureImplicitLoadingContextOnDecode:(bool)arg1;
- (void)setIdentifierForStringsFile:(id)arg1;
- (void)setInstantiatingForSimulator:(bool)arg1;
- (id)unarchiverForInstantiatingReturningError:(id*)arg1;

@end
