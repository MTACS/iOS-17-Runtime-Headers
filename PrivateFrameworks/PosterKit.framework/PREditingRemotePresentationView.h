
@interface PREditingRemotePresentationView : UIView

@property (nonatomic, readonly) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (id)portalLayer;

@end
