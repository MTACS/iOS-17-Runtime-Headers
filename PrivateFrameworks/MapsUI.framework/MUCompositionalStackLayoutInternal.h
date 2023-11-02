
@interface MUCompositionalStackLayoutInternal : MUConstraintLayoutInternal {
    void builder;
}

@property (nonatomic) <MULayoutItem> *container;
@property (nonatomic, retain) MUCompositionalStackLayoutGroupInternal *group;

- (void).cxx_destruct;
- (id)container;
- (id)group;
- (id)initWithContainer:(id)arg1 group:(id)arg2;
- (void)setContainer:(id)arg1;
- (void)setGroup:(id)arg1;

@end
