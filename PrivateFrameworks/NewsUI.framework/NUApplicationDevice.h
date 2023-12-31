
@interface NUApplicationDevice : NSObject <NUDevice> {
    UIApplication * _application;
    UIScreen * _screen;
}

@property (nonatomic, readonly) UIApplication *application;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScreen *screen;
@property (getter=isSplitScreen, nonatomic, readonly) bool splitScreen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)application;
- (id)initWithApplication:(id)arg1 screen:(id)arg2;
- (bool)isSplitScreen;
- (id)screen;

@end
