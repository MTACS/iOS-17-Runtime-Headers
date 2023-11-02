
@interface PKRemoteAlertPresentationTarget : NSObject <NSSecureCoding> {
    RBSProcessHandle * _process;
    NSString * _sceneID;
}

@property (nonatomic, readonly) RBSProcessHandle *process;
@property (nonatomic, readonly, copy) NSString *sceneID;

+ (id)createForSceneID:(id)arg1 inProcess:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)process;
- (id)sceneID;

@end
