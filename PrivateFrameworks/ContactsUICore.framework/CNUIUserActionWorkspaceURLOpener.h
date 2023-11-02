
@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener> {
    LSApplicationWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) LSApplicationWorkspace *workspace;

+ (id)openConfigurationWithEndpoint:(id)arg1 isSensitive:(bool)arg2;
+ (id)urlCouldNotBeOpenedErrorWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWorkspace:(id)arg1;
- (id)openURL:(id)arg1 isSensitive:(bool)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4;
- (id)openURL:(id)arg1 isSensitive:(bool)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;
- (id)workspace;

@end
