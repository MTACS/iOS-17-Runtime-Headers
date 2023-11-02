
@protocol SHSpectralOutputDelegate <NSObject>

@optional

- (void)didCalculateSpectralData:(NSArray *)arg1;
- (bool)shouldGenerateSpectralOutput;

@end
