
@interface SKTileMapNode : SKNode <NSCopying, NSSecureCoding> {
    bool  _enableAutomapping;
    float  _hexRadius;
    void _isoColumnVector;
    float  _isoColumnWidth;
    float  _isoHeightScalar;
    void _isoOrigin;
    float  _isoRowHeight;
    void _isoRowVector;
    void * _skcTileMapNode;
    SKTileSet * _tileSet;
    NSString * _tileSetName;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, copy) NSDictionary *attributeValues;
@property (nonatomic) long long blendMode;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double colorBlendFactor;
@property (nonatomic) bool enableAutomapping;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mapSize;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic, retain) SKShader *shader;
@property (nonatomic, retain) SKTileSet *tileSet;
@property (nonatomic, retain) NSString *tileSetName;
@property (nonatomic) struct CGSize { double x1; double x2; } tileSize;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (bool)supportsSecureCoding;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize { double x1; double x2; })arg4 fillWithTileGroup:(id)arg5;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize { double x1; double x2; })arg4 tileGroupLayout:(id)arg5;

- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;
- (double)alpha;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)applyTileStamp:(id)arg1 inColumn:(long long)arg2 row:(long long)arg3;
- (long long)blendMode;
- (void)calculateSize;
- (struct CGPoint { double x1; double x2; })centerOfTileAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (void)clearModifiedTileTracking;
- (id)color;
- (double)colorBlendFactor;
- (void)commonInit;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createTileStampFromColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 withWidth:(unsigned long long)arg3 height:(unsigned long long)arg4 addToTileSet:(bool)arg5;
- (void)dealloc;
- (bool)enableAutomapping;
- (void)encodeWithCoder:(id)arg1;
- (void)fillArray:(unsigned int*)arg1 withTilesFromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (void)fillArrayWithTiles:(unsigned int*)arg1;
- (void)fillWithTileDefinition:(id)arg1;
- (void)fillWithTileGroup:(id)arg1;
- (void)forceRedraw;
- (unsigned int)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2;
- (void)getTileModifiedData:(long long*)arg1 outMinRowModified:(long long*)arg2 outMaxColumnModified:(long long*)arg3 outmaxRowModified:(long long*)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize { double x1; double x2; })arg4 fillWithTileGroup:(id)arg5;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize { double x1; double x2; })arg4 tileGroupLayout:(id)arg5;
- (bool)isEqualToNode:(id)arg1;
- (unsigned int)lightingBitMask;
- (struct CGSize { double x1; double x2; })mapSize;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (void)rebuildTileSprites;
- (void)removeAllTiles;
- (void)setAlpha:(double)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(double)arg1;
- (void)setColumns:(unsigned long long)arg1 andRows:(long long)arg2;
- (void)setEnableAutomapping:(bool)arg1;
- (void)setLightingBitMask:(unsigned int)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setRawTiles:(unsigned int*)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (void)setShader:(id)arg1;
- (void)setStartData:(unsigned long long)arg1 rows:(unsigned long long)arg2 tileSize:(struct CGSize { double x1; double x2; })arg3 tileSet:(id)arg4;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3;
- (void)setTileGroup:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2;
- (void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTileSet:(id)arg1;
- (void)setTileSetName:(id)arg1;
- (void)setTileSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTilesFromArray:(unsigned int*)arg1;
- (void)setTilesFromArray:(unsigned int*)arg1 fromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)shader;
- (bool)shouldUnarchiveTileSet;
- (unsigned long long)tileColumnIndexFromPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)tileDefinitionAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (id)tileDefinitionForTileID:(unsigned int)arg1;
- (id)tileGroupAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (unsigned long long)tileRowIndexFromPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)tileSet;
- (id)tileSetName;
- (struct CGSize { double x1; double x2; })tileSize;
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)updateTileGroupsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)validateAllTiles;
- (id)valueForAttributeNamed:(id)arg1;

// Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit

+ (id)tileMapNodesWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize { double x1; double x2; })arg4 fromNoiseMap:(id)arg5 tileTypeNoiseMapThresholds:(id)arg6;

@end
