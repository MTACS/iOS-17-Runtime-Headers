
@interface _UIScreenInitialDisplayConfigurationLoader : NSObject {
    UISDisplayContext * _context;
    bool  _hasRequestedPreload;
}

@property (nonatomic, readonly) UISDisplayContext *initialDisplayContext;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (void)_startPreloadInitialDisplayContext;
- (id)initialDisplayContext;

@end
