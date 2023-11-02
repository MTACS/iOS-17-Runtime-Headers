
@interface HKBarSeriesFillStyleBezierPaths : NSObject {
    UIBezierPath * _selectedBezierPath;
    UIBezierPath * _unselectedBezierPath;
}

@property (nonatomic, retain) UIBezierPath *selectedBezierPath;
@property (nonatomic, retain) UIBezierPath *unselectedBezierPath;

- (void).cxx_destruct;
- (id)init;
- (id)selectedBezierPath;
- (void)setSelectedBezierPath:(id)arg1;
- (void)setUnselectedBezierPath:(id)arg1;
- (id)unselectedBezierPath;

@end
