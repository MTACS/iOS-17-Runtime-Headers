
@interface OUPipelineOnlineConfig : NSObject <NSCopying> {
    bool  _enable3DOROnline;
    bool  _enableRgbRefinement;
}

@property (nonatomic) bool enable3DOROnline;
@property (nonatomic) bool enableRgbRefinement;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable3DOROnline;
- (bool)enableRgbRefinement;
- (id)init;
- (void)setEnable3DOROnline:(bool)arg1;
- (void)setEnableRgbRefinement:(bool)arg1;

@end
