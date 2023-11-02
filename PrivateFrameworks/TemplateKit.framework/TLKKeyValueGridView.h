
@interface TLKKeyValueGridView : NUIContainerGridView {
    NSMutableArray * _keyLabels;
    NSMutableArray * _valueLabels;
}

@property (nonatomic, retain) NSMutableArray *keyLabels;
@property (nonatomic, retain) NSMutableArray *valueLabels;

- (void).cxx_destruct;
- (id)init;
- (id)keyLabels;
- (void)setKeyLabels:(id)arg1;
- (void)setValueLabels:(id)arg1;
- (void)updateWithTuples:(id)arg1 valueColumnIsTrailing:(bool)arg2 truncateKey:(bool)arg3;
- (id)valueLabels;

@end
