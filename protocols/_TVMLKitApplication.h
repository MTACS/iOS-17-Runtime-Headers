
@protocol _TVMLKitApplication <IKApplication>

@required

- (<UITraitEnvironment> *)keyTraitEnvironment;
- (bool)supportsPictureInPicturePlayback;

@end
