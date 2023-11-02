
@interface SVXDeviceSetupFlowScene : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _displayKeyFrames;
    long long  _sceneID;
}

@property (nonatomic, readonly, copy) NSArray *displayKeyFrames;
@property (nonatomic, readonly) long long sceneID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayKeyFrames;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneID:(long long)arg1 displayKeyFrames:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)sceneID;

@end
