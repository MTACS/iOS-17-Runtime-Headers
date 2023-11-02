
@interface PBUIPosterFloatingLayerReplica : PBUIPortalReplicaView <PBUIFloatingLayerObserver> {
    bool  _floatingLayerStandin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveStyle;
@property (getter=isFloatingLayerStandin, nonatomic) bool floatingLayerStandin;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFloatingLayerObserver;
@property (readonly) Class superclass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFloatingLayerObserver;
- (bool)isFloatingLayerStandin;
- (void)setFloatingLayerStandin:(bool)arg1;

@end
