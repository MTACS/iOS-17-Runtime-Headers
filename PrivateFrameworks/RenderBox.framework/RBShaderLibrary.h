
@interface RBShaderLibrary : NSObject {
    struct refcounted_ptr<RB::CustomShader::Library> { 
        struct Library {} *_p; 
    }  _library;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) <MTLLibrary> *metalLibrary;
@property (nonatomic, readonly, copy) NSString *source;

+ (id)defaultLibrary;
+ (id)defaultLibraryWithBundle:(id)arg1;
+ (id)libraryWithContentsOfURL:(id)arg1;
+ (id)libraryWithData:(id)arg1;
+ (id)libraryWithMetalLibrary:(id)arg1;
+ (id)libraryWithSource:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URL;
- (unsigned int)addErrorHandler:(id /* block */)arg1;
- (id)bundle;
- (id)data;
- (id)metalLibrary;
- (void)removeErrorHandler:(unsigned int)arg1;
- (id)source;

@end
