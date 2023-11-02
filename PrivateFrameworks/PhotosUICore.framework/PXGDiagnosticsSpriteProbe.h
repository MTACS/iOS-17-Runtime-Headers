
@interface PXGDiagnosticsSpriteProbe : NSObject {
    bool  _active;
    id /* block */  _eventHandler;
    id /* block */  _predicate;
    id /* block */  _tagDescriptor;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, copy) id /* block */ predicate;
@property (nonatomic, copy) id /* block */ tagDescriptor;

+ (void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const struct { struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; } x1; struct { float x_2_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; float x_1_3_2[4]; } x_2_2_1; } x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; unsigned short x_2_1_7; unsigned char x_2_1_8; float x_2_1_9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_2_1[4]; } x_2_1_10; } x2; }*)arg3 newState:(const struct { struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; } x1; struct { float x_2_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; float x_1_3_2[4]; } x_2_2_1; } x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; unsigned short x_2_1_7; unsigned char x_2_1_8; float x_2_1_9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_2_1[4]; } x_2_1_10; } x2; }*)arg4 userInfo:(id)arg5;
+ (id)activeSpriteProbes;
+ (void)didAdjustSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg1 forAnimation:(id)arg2 appearing:(bool)arg3;
+ (void)layout:(id)arg1 didChangeSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg2;
+ (void)layout:(id)arg1 didInsertSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg2;
+ (void)layout:(id)arg1 willChangeSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg2;
+ (void)layout:(id)arg1 willRemoveSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg2;
+ (void)shouldUseDoubleSidedAnimationForSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg1 indexes:(id)arg2 animation:(id)arg3;
+ (id)spriteDataStore;
+ (void)willAdjustSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg1 forAnimation:(id)arg2 appearing:(bool)arg3;
+ (void)willRequestTextureForSpriteWithGeometry:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg1 style:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg2 info:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg3 inLayout:(id)arg4 textureInfo:(id)arg5;

- (void).cxx_destruct;
- (void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const struct { struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; } x1; struct { float x_2_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; float x_1_3_2[4]; } x_2_2_1; } x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; unsigned short x_2_1_7; unsigned char x_2_1_8; float x_2_1_9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_2_1[4]; } x_2_1_10; } x2; }*)arg3 newState:(const struct { struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; } x1; struct { float x_2_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; float x_1_3_2[4]; } x_2_2_1; } x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; unsigned short x_2_1_7; unsigned char x_2_1_8; float x_2_1_9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_2_1[4]; } x_2_1_10; } x2; }*)arg4 userInfo:(id)arg5;
- (void)_recordEventWithType:(long long)arg1 oldState:(const struct { struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; } x1; struct { float x_2_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; float x_1_3_2[4]; } x_2_2_1; } x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; unsigned short x_2_1_7; unsigned char x_2_1_8; float x_2_1_9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_2_1[4]; } x_2_1_10; } x2; }*)arg2 newState:(const struct { struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; } x1; struct { float x_2_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; float x_1_3_2[4]; } x_2_2_1; } x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; unsigned short x_2_1_7; unsigned char x_2_1_8; float x_2_1_9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_2_1[4]; } x_2_1_10; } x2; }*)arg3 userInfo:(id)arg4;
- (id)descriptionForSpriteState:(const struct { struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_1_1_1; } x1; struct { float x_2_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; float x_1_3_2[4]; } x_2_2_1; } x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; unsigned short x_2_1_7; unsigned char x_2_1_8; float x_2_1_9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_2_1[4]; } x_2_1_10; } x2; }*)arg1;
- (id /* block */)eventHandler;
- (id)init;
- (bool)isActive;
- (id /* block */)predicate;
- (void)setActive:(bool)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setPredicate:(id /* block */)arg1;
- (void)setTagDescriptor:(id /* block */)arg1;
- (id /* block */)tagDescriptor;

@end
