
@interface _KSFileFile : _KSFileEntry <NSSecureCoding, _KSBlobSaver> {
    NSDate * _lastModified;
    unsigned long long  _offset;
    int  _protectionClass;
    unsigned long long  _size;
    NSURL * _url;
}

+ (int)protectionFromURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)consistencyCheck;
- (id)contents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)lastModified;
- (void)loadAttributesFromURL:(id)arg1;
- (void)restoreToPath:(id)arg1;
- (void)saveAttributesToURL:(id)arg1;
- (void)saveTo:(id)arg1;
- (unsigned long long)size;

@end
