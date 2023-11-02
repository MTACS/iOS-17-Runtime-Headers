
@interface PreviewsServicesUI.UVPreviewSceneAction : BSAction

+ (id)new;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 responder:(id)arg2;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;

@end
