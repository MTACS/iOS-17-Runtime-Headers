
@interface _UINavigationControllerVisualStyleFactory : NSObject <_UINavigationControllerVisualStyleProviding> {
    <_UINavigationControllerVisualStyleProviding> * _visualStyleProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <_UINavigationControllerVisualStyleProviding> *visualStyleProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerVisualStyleProvider:(id)arg1;
- (void)setVisualStyleProvider:(id)arg1;
- (id)styleForNavigationController:(id)arg1;
- (id)visualStyleProvider;

@end
