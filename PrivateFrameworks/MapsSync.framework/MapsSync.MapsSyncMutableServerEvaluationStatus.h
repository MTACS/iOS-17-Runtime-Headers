
@interface MapsSync.MapsSyncMutableServerEvaluationStatus : MapsSync.MapsSyncMutableBaseItem {
    void _proxy;
}

@property (nonatomic) bool arpStatus;
@property (nonatomic) bool rapStatus;

- (void).cxx_destruct;
- (bool)arpStatus;
- (id)initWithProxyObject:(id)arg1;
- (bool)rapStatus;
- (void)setArpStatus:(bool)arg1;
- (void)setRapStatus:(bool)arg1;

@end
