
@interface BWDeepZoomInferenceConfiguration : BWTiledEspressoInferenceConfiguration {
    int  _mode;
    int  _type;
    int  _version;
}

@property (nonatomic) int mode;
@property (nonatomic) int type;
@property (nonatomic) int version;

- (void)dealloc;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(int)arg1;
- (int)type;
- (int)version;

@end
