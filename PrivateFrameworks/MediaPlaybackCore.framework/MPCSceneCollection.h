
@interface MPCSceneCollection : NSObject {
    double  _frameRate;
    NSArray * _scenes;
    NSString * _version;
}

@property (nonatomic) double frameRate;
@property (nonatomic, copy) NSArray *scenes;
@property (nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (double)frameRate;
- (id)scenes;
- (void)setFrameRate:(double)arg1;
- (void)setScenes:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
