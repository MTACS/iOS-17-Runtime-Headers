
@interface SCNMTLLibrary : NSObject {
    <MTLLibrary> * _library;
    NSURL * _libraryURL;
    SCNMTLLibraryManager * _manager;
}

@property (nonatomic, readonly) <MTLLibrary> *library;

- (void)_load;
- (void)dealloc;
- (id)initWithPath:(id)arg1 manager:(id)arg2;
- (id)library;

@end
