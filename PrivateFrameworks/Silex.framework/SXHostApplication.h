
@interface SXHostApplication : NSObject <SXHost> {
    UIApplication * _application;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic) UIApplication *application;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)active;
- (id)application;
- (bool)canOpenURL:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setApplication:(id)arg1;

@end
