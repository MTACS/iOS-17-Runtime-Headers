
@interface MUSizeLayoutInternal : MUConstraintLayoutInternal {
    void builder;
}

@property (nonatomic) <MULayoutItem> *item;
@property (nonatomic) float priority;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (double)useIntrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 priority:(float)arg3;
- (id)item;
- (float)priority;
- (void)setItem:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
