
@interface SelectedPhotoAttribute : NSObject {
    float  _maxAttributeFreq;
    unsigned long long  _selectedAttribute;
    float  _selectedTokenPercentage;
}

@property float maxAttributeFreq;
@property unsigned long long selectedAttribute;
@property float selectedTokenPercentage;

- (id)initWithZeros;
- (float)maxAttributeFreq;
- (unsigned long long)selectedAttribute;
- (float)selectedTokenPercentage;
- (void)setMaxAttributeFreq:(float)arg1;
- (void)setSelectedAttribute:(unsigned long long)arg1;
- (void)setSelectedTokenPercentage:(float)arg1;

@end
