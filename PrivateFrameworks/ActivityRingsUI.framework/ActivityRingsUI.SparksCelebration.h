
@interface ActivityRingsUI.SparksCelebration : ARUICelebration {
    void duration;
    void scene;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _TtC3VFX8VFXScene *scene;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)apply:(id)arg1 context:(id)arg2;
- (double)duration;
- (id)init;
- (id)scene;
- (unsigned long long)type;
- (void)updateDeltaTime:(double)arg1;

@end
