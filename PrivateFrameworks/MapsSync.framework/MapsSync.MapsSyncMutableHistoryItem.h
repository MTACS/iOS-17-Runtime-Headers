
@interface MapsSync.MapsSyncMutableHistoryItem : MapsSync.MapsSyncMutableBaseItem {
    void _proxyHistory;
}

@property (nonatomic) double position;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (double)position;
- (void)setPosition:(double)arg1;

@end
