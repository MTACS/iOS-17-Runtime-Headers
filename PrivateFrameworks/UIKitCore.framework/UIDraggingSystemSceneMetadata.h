
@interface UIDraggingSystemSceneMetadata : NSObject <NSSecureCoding> {
    NSString * _activityType;
    NSString * _sceneIdentifier;
}

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *sceneIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sceneIdentifier;
- (void)setActivityType:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;

@end
