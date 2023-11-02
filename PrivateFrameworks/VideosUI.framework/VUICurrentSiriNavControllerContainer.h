
@interface VUICurrentSiriNavControllerContainer : NSObject {
    NSPointerArray * _activeNavigationControllers;
}

@property (nonatomic, retain) NSPointerArray *activeNavigationControllers;

+ (bool)isRunningInSiriPluggin;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)activeNavigationControllers;
- (id)currentSiriNavController;
- (id)init;
- (void)setActiveNavigationControllers:(id)arg1;
- (void)setCurrentSiriNavController:(id)arg1;

@end
