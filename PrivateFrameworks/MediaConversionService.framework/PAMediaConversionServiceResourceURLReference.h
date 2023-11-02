
@interface PAMediaConversionServiceResourceURLReference : NSObject {
    bool  _mustStopAccessingURL;
    bool  _shouldDeleteOnDeallocation;
    NSURL * _url;
}

@property bool mustStopAccessingURL;
@property bool shouldDeleteOnDeallocation;
@property (retain) NSURL *url;

+ (bool)getPathHash:(unsigned long long*)arg1 lastPathComponent:(id*)arg2 forDictionaryRepresentation:(id)arg3;
+ (id)referenceWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
+ (id)referenceWithURL:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionaryRepresentationWithError:(id*)arg1;
- (bool)getFileSize:(unsigned long long*)arg1 error:(id*)arg2;
- (void)getPathHash:(unsigned long long*)arg1 lastPathComponent:(id*)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)mustStopAccessingURL;
- (void)setMustStopAccessingURL:(bool)arg1;
- (void)setShouldDeleteOnDeallocation:(bool)arg1;
- (void)setUrl:(id)arg1;
- (bool)shouldDeleteOnDeallocation;
- (id)url;

@end
