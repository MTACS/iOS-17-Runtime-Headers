
@interface ISIcon : NSObject <CALayerDelegate, ISScalableCompositorResource> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * prepareISIconDigestToSignpostIDs;
}

@property (readonly) <ISIconIdentity> *_identity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *decorations;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) ISIconManager *manager;
@property (retain) NSMutableDictionary *prepareISIconDigestToSignpostIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IFSymbol *symbol;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (const char *)_AttachedResourceInfoKey;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)applicationIcon;
+ (unsigned long long)behaviourRevision;
+ (int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
+ (id)genericApplicationIcon;
+ (id)genericDocumentIcon;
+ (id)layerUpdateQueue;
+ (id)sizesFromSet:(unsigned long long)arg1;
+ (id)templateTypeForTag:(id)arg1 tagClass:(id)arg2;
+ (id)templateTypeForType:(id)arg1;
+ (id)transparentIcon;
+ (bool)variant:(int)arg1 isMemberOfSet:(unsigned long long)arg2;
+ (struct _LIIconVariantInfo { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; unsigned long long x4; char *x5; }*)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long*)arg2;
+ (bool)writeCustomIcon:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImageForDescriptor:(id)arg1;
- (struct CGImage { }*)CGImageForImageDescriptor:(id)arg1;
- (double)_aspectRatio;
- (id)_beginPrepareISIconSignpost:(id)arg1 funcName:(const char *)arg2;
- (void)_endPrepareISIconSignpost:(id)arg1;
- (void)_eventPrepareISIconSignpost:(id)arg1 message:(id)arg2;
- (id)_identity;
- (id)_imageForSymbolImageDescriptor:(id)arg1;
- (id)_init;
- (id)_prepareImageForImageDescriptor:(id)arg1;
- (void)_prepareImagesForImageDescriptors:(id)arg1;
- (unsigned long long)badgeOptions;
- (id)decorations;
- (void)displayLayer:(id)arg1;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)iconWithDecorations:(id)arg1;
- (id)imageForDescriptor:(id)arg1;
- (id)imageForImageDescriptor:(id)arg1;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)manager;
- (id)prepareISIconDigestToSignpostIDs;
- (id)prepareImageForDescriptor:(id)arg1;
- (void)prepareImagesForDescriptors:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (void)setPrepareISIconDigestToSignpostIDs:(id)arg1;
- (id)symbol;
- (unsigned long long)variantOptions;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3;
- (id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 forceNoTextEffects:(bool)arg4;

@end
