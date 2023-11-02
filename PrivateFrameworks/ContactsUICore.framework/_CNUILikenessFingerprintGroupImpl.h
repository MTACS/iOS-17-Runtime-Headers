
@interface _CNUILikenessFingerprintGroupImpl : NSObject <_CNUILikenessFingerprintImpl> {
    NSArray * _badges;
    NSArray * _impls;
    CNUILikenessRenderingScope * _scope;
}

@property (readonly, copy) NSArray *badges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *impls;
@property (readonly, copy) CNUILikenessRenderingScope *scope;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)badges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasContactIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)impls;
- (id)initWithImpls:(id)arg1 scope:(id)arg2 badges:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)scope;

@end
