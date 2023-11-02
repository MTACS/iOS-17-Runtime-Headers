
@interface IFSymbol : NSObject <ISScalableCompositorResource, NSSecureCoding> {
    NSURL * _bundleURL;
    CUICatalog * _catalog;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
}

@property (readonly) NSURL *bundleURL;
@property (readonly) CUICatalog *catalog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)_coreGlyphsBundle;
+ (id)_coreGlyphsPrivateBundle;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lookupResolvedName:(id)arg1;
- (bool)_shouldFlipFromSymbolImage:(id)arg1 desiredDirection:(long long)arg2;
- (id)bundleURL;
- (id)catalog;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageForDescriptor:(id)arg1;
- (id)imageForGraphicSymbolDescriptor:(id)arg1;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolName:(id)arg1 bundleURL:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)name;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
