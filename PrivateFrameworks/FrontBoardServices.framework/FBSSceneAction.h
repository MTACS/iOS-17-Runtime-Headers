
@interface FBSSceneAction : BSAction {
    FBSSerialQueue * _callOutQueue;
    FBSScene * _scene;
}

@property (nonatomic, retain) FBSSerialQueue *callOutQueue;
@property (nonatomic, retain) FBSScene *scene;

- (void).cxx_destruct;
- (id)callOutQueue;
- (id)scene;
- (void)setCallOutQueue:(id)arg1;
- (void)setScene:(id)arg1;

@end
