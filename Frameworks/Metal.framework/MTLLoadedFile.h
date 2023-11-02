
@interface MTLLoadedFile : NSObject {
    NSData * _fileData;
    struct FileIdentifier { 
        int dev; 
        unsigned long long ino; 
    }  _identity;
    bool  _isCached;
    long long  _modifiedTimeWhenCached;
    void * _parent;
}

@property (readonly) NSData *contents;

- (id).cxx_construct;
- (id)contents;
- (void)dealloc;
- (id)initWithData:(id)arg1 parent:(void*)arg2;

@end
