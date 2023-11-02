
@interface NTKArgonEncryptedBundleEnumerator : NSEnumerator {
    NSArray * _allObjects;
    NSURL * _lastURL;
    NSEnumerator * _urlEnumerator;
}

@property (readonly, copy) NSArray *allObjects;

- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithSearchPathDomains:(unsigned long long)arg1;
- (id)initWithSourceDirectoryPaths:(id)arg1;
- (id)initWithSourceDirectoryURLs:(id)arg1;
- (id)nextObject;

@end
