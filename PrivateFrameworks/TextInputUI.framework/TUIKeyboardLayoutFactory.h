
@interface TUIKeyboardLayoutFactory : NSObject {
    TUIKBGraphSerialization * _decoder;
    NSMutableDictionary * _internalCache;
    void * _layoutsLibraryHandle;
    NSMutableDictionary * _overlayDecoders;
}

@property (retain) TUIKBGraphSerialization *decoder;
@property (retain) NSMutableDictionary *internalCache;
@property (nonatomic, readonly) void*layoutsLibraryHandle;
@property (nonatomic, retain) NSMutableDictionary *overlayDecoders;

+ (id)crescendoLayouts;
+ (id)layoutsFileNameForDeviceClass;
+ (id)sharedKeyboardFactory;

- (void)_createDecoderFromFilename:(id)arg1;
- (void)_createDecoderIfNecessary;
- (void)dealloc;
- (id)decoder;
- (id)init;
- (id)internalCache;
- (id)keyboardPrefixForWidth:(double)arg1 andEdge:(bool)arg2;
- (id)keyboardSuffixForScreenDimensions:(struct CGSize { double x1; double x2; })arg1;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;
- (void*)layoutsLibraryHandle;
- (id)overlayDecoders;
- (void)setData:(id)arg1 forKeyboard:(id)arg2;
- (void)setDecoder:(id)arg1;
- (void)setInternalCache:(id)arg1;
- (void)setOverlayDecoders:(id)arg1;

@end
