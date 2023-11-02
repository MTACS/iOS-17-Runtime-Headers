
@interface PVMultiBlendLayerParams : NSObject <NSCopying, NSSecureCoding> {
    int  _mode;
    float  _opacity;
}

@property (nonatomic, readonly) int hgBlendMode;
@property (nonatomic) int mode;
@property (nonatomic) float opacity;

+ (bool)supportsSecureCoding;

- (void)_sharedInitWithOpacity:(float)arg1 mode:(int)arg2;
- (id)blendModeName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)hgBlendMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOpacity:(float)arg1 mode:(int)arg2;
- (int)mode;
- (float)opacity;
- (void)setMode:(int)arg1;
- (void)setOpacity:(float)arg1;

@end
