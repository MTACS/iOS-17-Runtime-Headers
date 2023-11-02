
@protocol EXBDisplayEndpointHostComponentDelegate <NSObject>

@required

- (void)endpoint:(EXBDisplayEndpointHostComponent *)arg1 didChangeDisplayArrangementItem:(EXBDisplayArrangementItem *)arg2;
- (void)endpoint:(EXBDisplayEndpointHostComponent *)arg1 didChangeDisplayConfigurationRequest:(FBSDisplayConfigurationRequest *)arg2;
- (void)endpoint:(EXBDisplayEndpointHostComponent *)arg1 didChangeWantsControlOfDisplay:(bool)arg2;
- (void)endpoint:(EXBDisplayEndpointHostComponent *)arg1 modifyInitialSceneParameters:(FBSMutableSceneParameters *)arg2;

@end
