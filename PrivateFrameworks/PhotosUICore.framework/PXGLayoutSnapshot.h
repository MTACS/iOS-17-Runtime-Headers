
@interface PXGLayoutSnapshot : NSObject {
    NSDictionary * _identifierSourceByDataSourceIdentifier;
    NSDictionary * _identifierSourceByDataSourceIdentifierHash;
    PXGSpriteDataStore * _spriteDataStore;
    NSDictionary * _spriteIndexesByObjectIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic, readonly) NSDictionary *identifierSourceByDataSourceIdentifier;
@property (nonatomic, readonly) NSDictionary *identifierSourceByDataSourceIdentifierHash;
@property (nonatomic, readonly) PXGSpriteDataStore *spriteDataStore;
@property (nonatomic, readonly) NSDictionary *spriteIndexesByObjectIdentifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (void)applyViewportShift:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateObjectIdentifiersForInfos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg1 count:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectIdentifiersForSpriteIndexes:(id)arg1 infos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSpritesWithObjectIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)identifierSourceByDataSourceIdentifier;
- (id)identifierSourceByDataSourceIdentifierHash;
- (id)init;
- (id)initWithLayout:(id)arg1 spriteDataStore:(id)arg2;
- (void)releaseSpriteDataStore;
- (id)spriteDataStore;
- (id)spriteIndexesByObjectIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
