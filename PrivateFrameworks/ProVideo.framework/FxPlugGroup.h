
@interface FxPlugGroup : NSObject {
    struct FxPlugGroupPriv { id x1; id x2; } * _priv;
}

+ (id)fxPlugGroupWithDescriptor:(id)arg1;

- (void)addFxPlugDescriptor:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)descriptor;
- (id)fxPlugDescriptorAtIndex:(int)arg1;
- (id)initWithDescriptor:(id)arg1;

@end
