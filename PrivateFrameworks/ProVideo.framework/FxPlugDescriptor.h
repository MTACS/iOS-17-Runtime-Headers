
@interface FxPlugDescriptor : NSObject {
    struct FxPlugDescriptorPriv { id x1; id x2; } * _priv;
}

+ (id)fxPlugDescriptorWithFxMetaPlug:(id)arg1;
+ (id)fxPlugDescriptorWithPROPlugIn:(void*)arg1;

- (bool)canDoGPU;
- (void)dealloc;
- (id)displayName;
- (id)flavor;
- (id)groupDescriptor;
- (id)initWithFxMetaPlug:(id)arg1;
- (id)initWithPROPlugIn:(void*)arg1;
- (id)metaPlug;
- (Class)plugInClass;
- (id)plugInTypeUUID;
- (id)properties;
- (bool)requiresCoreImage;
- (id)uuid;
- (id)version;

@end
