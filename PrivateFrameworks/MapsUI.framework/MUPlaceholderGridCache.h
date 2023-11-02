
@interface MUPlaceholderGridCache : NSObject {
    UIImage * _darkGrid;
    MKMapSnapshotter * _darkSnapshotter;
    UIImage * _lightGrid;
    MKMapSnapshotter * _lightSnapshotter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _snapshotterLock;
}

@property (nonatomic, readonly) UIImage *darkGrid;
@property (nonatomic, readonly) UIImage *lightGrid;

+ (id)unretainedInstance;

- (void).cxx_destruct;
- (void)_cancelSnapshots;
- (void)_saveDarkGrid:(id)arg1;
- (void)_saveLightGrid:(id)arg1;
- (id)darkGrid;
- (id)init;
- (id)lightGrid;
- (void)loadPlaceholderGridImages;

@end
