
@interface UISceneSessionActivationRequest : NSObject <BSDebugDescriptionProviding, NSCopying> {
    UISceneActivationRequestOptions * _options;
    NSString * _role;
    UISceneSession * _session;
    NSUserActivity * _userActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UISceneActivationRequestOptions *options;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) UISceneSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserActivity *userActivity;

+ (id)request;
+ (id)requestWithRole:(id)arg1;
+ (id)requestWithSession:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithSession:(id)arg1 role:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)options;
- (id)role;
- (id)session;
- (void)setOptions:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userActivity;

@end
