
@interface NTKGreenfieldB640Model : NSObject {
    NSBundle * _bandImageBundle;
    NSString * _bandImagePath;
    NSError * _error;
    NSArray * _watchFaceModels;
}

@property (nonatomic, retain) NSBundle *bandImageBundle;
@property (nonatomic, retain) NSString *bandImagePath;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *watchFaceModels;

- (void).cxx_destruct;
- (id)bandImageBundle;
- (id)bandImagePath;
- (id)error;
- (id)initWithWatchFaceModels:(id)arg1 error:(id)arg2 bandImagePath:(id)arg3 bandImageBundle:(id)arg4;
- (void)setBandImageBundle:(id)arg1;
- (void)setBandImagePath:(id)arg1;
- (void)setError:(id)arg1;
- (void)setWatchFaceModels:(id)arg1;
- (id)watchFaceModels;

@end
