
@interface MUEdgeLayoutInternal : MUConstraintLayoutInternal {
    void builder;
}

@property (nonatomic) <MULayoutItem> *container;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) <MULayoutItem> *item;
@property (nonatomic) float priority;

- (void).cxx_destruct;
- (id)container;
- (unsigned long long)edges;
- (id)initWithItem:(id)arg1 container:(id)arg2;
- (id)initWithItem:(id)arg1 container:(id)arg2 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initWithItem:(id)arg1 container:(id)arg2 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3 edges:(unsigned long long)arg4 priority:(float)arg5;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (id)item;
- (float)priority;
- (void)setContainer:(id)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setItem:(id)arg1;
- (void)setPriority:(float)arg1;

@end
