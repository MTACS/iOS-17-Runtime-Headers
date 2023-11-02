
@interface SSScreenSnapshotter : NSObject {
    UIScreen * _screen;
}

@property (nonatomic, readonly) UIScreen *screen;

+ (id)snapshotterForScreen:(id)arg1;

- (void).cxx_destruct;
- (id)initWithScreen:(id)arg1;
- (id)screen;
- (id)takeScreenshot;

@end
