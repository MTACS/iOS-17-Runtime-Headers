
@interface TIKeyboardLayoutFactory : NSObject {
    NSMutableDictionary * _internalCache;
    void * _layoutsLibraryHandle;
}

@property (retain) NSMutableDictionary *internalCache;
@property (nonatomic, readonly) void*layoutsLibraryHandle;

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;

- (void).cxx_destruct;
- (id)init;
- (id)internalCache;
- (id)keyboardPrefixForWidth:(double)arg1 andEdge:(bool)arg2;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;
- (void*)layoutsLibraryHandle;
- (void)setInternalCache:(id)arg1;

@end
