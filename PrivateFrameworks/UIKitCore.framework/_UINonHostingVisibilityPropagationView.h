
@interface _UINonHostingVisibilityPropagationView : _UIVisibilityPropagationView {
    NSString * _environmentIdentifier;
    int  _pid;
}

@property (nonatomic, readonly) NSString *environmentIdentifier;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (id)environmentIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pid:(int)arg2 environmentIdentifier:(id)arg3;
- (int)pid;

@end
