
@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing> {
    bool  _isDynamic;
    PXGLayout * _layout;
    long long  _layoutVersion;
    id  _objectReference;
    unsigned int  _spriteIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasObjectReference;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDynamic;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) PXGLayout *layout;
@property (nonatomic) long long layoutVersion;
@property (nonatomic, retain) id objectReference;
@property (nonatomic) unsigned int spriteIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_init;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
- (id)description;
- (bool)hasObjectReference;
- (unsigned long long)hash;
- (id)init;
- (bool)isDynamic;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)layout;
- (long long)layoutVersion;
- (id)objectReference;
- (void)setIsDynamic:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutVersion:(long long)arg1;
- (void)setObjectReference:(id)arg1;
- (void)setSpriteIndex:(unsigned int)arg1;
- (unsigned int)spriteIndex;

@end
