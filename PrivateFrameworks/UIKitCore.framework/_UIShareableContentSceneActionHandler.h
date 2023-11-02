
@interface _UIShareableContentSceneActionHandler : NSObject <_UISceneBSActionHandler> {
    <_UISceneBSActionHandler> * _shareableContentActionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_UISceneBSActionHandler> *shareableContentActionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (void)setShareableContentActionHandler:(id)arg1;
- (id)shareableContentActionHandler;

@end
