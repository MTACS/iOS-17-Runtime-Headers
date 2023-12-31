
@interface OADBlipRef : NSObject <NSCopying> {
    OADBlip * mBlip;
    NSMutableArray * mEffects;
    int  mIndex;
    NSString * mName;
}

+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
+ (int)blipTypeForContentType:(id)arg1;
+ (int)blipTypeForExtension:(id)arg1;
+ (int)blipTypeForImageData:(id)arg1;
+ (id)inflatedExtensionForGzippedExtension:(id)arg1;

- (void).cxx_destruct;
- (void)addEffect:(id)arg1;
- (id)blip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectAtIndex:(unsigned long long)arg1;
- (unsigned long long)effectCount;
- (id)effects;
- (unsigned long long)hash;
- (int)index;
- (id)init;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isNull;
- (id)name;
- (void)removeEffectAtIndex:(unsigned long long)arg1;
- (void)setBlip:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setIndex:(int)arg1;
- (void)setName:(id)arg1;

@end
