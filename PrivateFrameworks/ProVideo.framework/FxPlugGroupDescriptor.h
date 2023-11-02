
@interface FxPlugGroupDescriptor : NSObject {
    struct FxPlugGroupDescriptorPriv { id x1; } * _priv;
}

+ (id)fxPlugGroupDescriptorWithUUID:(id)arg1 andDisplayName:(id)arg2;

- (void)dealloc;
- (id)displayName;
- (id)initWithUUID:(id)arg1 andDisplayName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)uuid;

@end
