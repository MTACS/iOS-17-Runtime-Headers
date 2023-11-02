
@interface HDOntologyManifestUpdater : NSObject {
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

+ (id)manifestURLWithBaseURL:(id)arg1;
+ (id)manifestVersionURLForManifestURL:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (id)updateCoordinator;
- (void)updateManifestWithURL:(id)arg1 session:(id)arg2 completion:(id /* block */)arg3;

@end
