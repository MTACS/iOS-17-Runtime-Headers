
@interface FxPin : NSObject {
    struct FxPinPriv { id x1; id x2; id x3; id x4; id x5; id x6; int x7; Class x8; } * _priv;
}

- (void)dealloc;
- (id)description;
- (int)direction;
- (id)displayName;
- (int)index;
- (id)init;
- (id)parentPlug;
- (id)properties;
- (void)setDescription:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setParentPlug:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setValueClass:(Class)arg1;
- (id)stream;
- (id)uuid;
- (Class)valueClass;

@end
