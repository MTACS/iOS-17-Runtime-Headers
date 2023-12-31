
@interface CRInsightsContext : NSObject {
    CRCameraReader * _cameraReader;
    NSMutableDictionary * _info;
}

@property (nonatomic) CRCameraReader *cameraReader;
@property (nonatomic, retain) NSMutableDictionary *info;

- (void).cxx_destruct;
- (id)cameraReader;
- (id)description;
- (id)info;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)setCameraReader:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
