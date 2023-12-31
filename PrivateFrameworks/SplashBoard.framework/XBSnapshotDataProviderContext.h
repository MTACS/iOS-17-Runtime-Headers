
@interface XBSnapshotDataProviderContext : NSObject {
    bool  _opaque;
    double  _scale;
}

@property (getter=isOpaque, nonatomic) bool opaque;
@property (nonatomic) double scale;

- (bool)isOpaque;
- (double)scale;
- (void)setOpaque:(bool)arg1;
- (void)setScale:(double)arg1;

@end
