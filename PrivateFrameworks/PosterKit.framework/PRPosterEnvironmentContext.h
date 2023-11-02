
@interface PRPosterEnvironmentContext : NSObject {
    long long  _mode;
    bool  _preview;
    unsigned long long  _previewContent;
    bool  _snapshot;
}

@property (nonatomic, readonly) long long mode;
@property (getter=isPreview, nonatomic, readonly) bool preview;
@property (nonatomic, readonly) unsigned long long previewContent;
@property (getter=isSnapshot, nonatomic, readonly) bool snapshot;

- (id)initWithMode:(long long)arg1 isPreview:(bool)arg2 previewContent:(unsigned long long)arg3 isSnapshot:(bool)arg4;
- (id)initWithSettings:(id)arg1;
- (bool)isPreview;
- (bool)isSnapshot;
- (long long)mode;
- (unsigned long long)previewContent;

@end
