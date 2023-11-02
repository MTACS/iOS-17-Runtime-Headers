
@interface FxMetaPlug : NSObject <FxMetaPlug> {
    struct FxMetaPlugPriv { id x1; id x2; } * _priv;
}

+ (id)fxMetaPlugWithWrapper:(id)arg1 andData:(id)arg2;
+ (id)syntheticUUIDBasedOnIndex:(int)arg1;
+ (id)syntheticUUIDBasedOnString:(id)arg1;

- (id)data;
- (void)dealloc;
- (id)displayName;
- (id)fxPlugDescriptor;
- (id)fxPlugProperties;
- (id)groupDisplayName;
- (id)groupUUID;
- (id)initWithWrapper:(id)arg1 andData:(id)arg2;
- (id)uuid;
- (id)version;
- (id)versionDisplayName;
- (id)wrapper;

@end
