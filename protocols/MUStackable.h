
@protocol MUStackable <NSObject>

@required

- (bool)isStacked;
- (void)setStacked:(bool)arg1;
- (bool)shouldStackForProposedWidth:(double)arg1;

@end
