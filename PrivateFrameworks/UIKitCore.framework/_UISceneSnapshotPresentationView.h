
@interface _UISceneSnapshotPresentationView : UIView <UISceneSnapshotPresentation> {
    FBSceneSnapshot * _snapshot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FBSceneSnapshot *sceneSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSnapshot:(id)arg1;
- (id)sceneSnapshot;
- (void)setSceneSnapshot:(id)arg1;

@end
