
@interface _CHUISWidgetHostViewControllerCollection : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_viewControllers;
}

@property (nonatomic, readonly, copy) NSArray *viewControllers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)noteCreated:(id)arg1;
- (void)noteDestroyed:(id)arg1;
- (id)viewControllers;

@end
