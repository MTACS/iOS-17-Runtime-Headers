
@interface NUMessagePresenter : NSObject <SXMessagePresenter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canPresentMessage;
- (void)presentMessage:(id)arg1;

@end
