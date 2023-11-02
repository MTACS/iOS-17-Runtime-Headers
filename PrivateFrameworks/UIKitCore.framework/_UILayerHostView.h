
@interface _UILayerHostView : _UIVisibilityPropagationView {
    unsigned int  _contextID;
    int  _pid;
}

@property (nonatomic) unsigned int contextID;
@property (nonatomic) bool inheritsSecurity;
@property (nonatomic, readonly, retain) CALayerHost *layerHost;

+ (Class)layerClass;

- (unsigned int)contextID;
- (bool)inheritsSecurity;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
- (id)layerHost;
- (void)setContextID:(unsigned int)arg1;
- (void)setInheritsSecurity:(bool)arg1;
- (void)setPid:(int)arg1 contextID:(unsigned int)arg2;

@end
