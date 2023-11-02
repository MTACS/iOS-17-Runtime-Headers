
@interface RPTChainedCoordinateSpaceConverter : RPTCoordinateSpaceConverter {
    RPTCoordinateSpaceConverter * _primary;
    RPTCoordinateSpaceConverter * _secondary;
}

@property (nonatomic, retain) RPTCoordinateSpaceConverter *primary;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *secondary;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })convertSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })convertVector:(struct CGVector { double x1; double x2; })arg1;
- (id)initWithPrimary:(id)arg1 secondary:(id)arg2;
- (id)primary;
- (id)secondary;
- (void)setPrimary:(id)arg1;
- (void)setSecondary:(id)arg1;

@end
