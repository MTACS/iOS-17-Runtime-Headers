
@interface OADColor : NSObject <NSCopying> {
    NSMutableArray * mTransforms;
}

+ (float)alphaWithColor:(id)arg1;
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)tsuColorWithRgbColor:(id)arg1;

- (void).cxx_destruct;
- (void)addTransform:(id)arg1;
- (void)addTransformOfType:(int)arg1;
- (void)addTransformOfType:(int)arg1 value:(float)arg2;
- (id)colorForStyleColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setTransforms:(id)arg1;
- (id)transforms;

@end
