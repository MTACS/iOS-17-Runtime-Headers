
@interface SLShareableContentAction : NSObject <NSSecureCoding> {
    BSAction * _action;
    NSString * _sceneIdentifier;
}

@property (nonatomic, readonly) BSAction *action;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;

+ (id)actionWithBSAction:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fail;
- (void)failWithError:(id)arg1;
- (void)fulfillWithResponse:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)initWithSceneIdentifier:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)sceneIdentifier;

@end
