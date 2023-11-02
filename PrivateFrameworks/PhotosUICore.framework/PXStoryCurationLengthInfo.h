
@interface PXStoryCurationLengthInfo : NSObject {
    unsigned long long  _availableCurationLengths;
    unsigned long long  _defaultCurationLength;
}

@property (nonatomic, readonly) unsigned long long availableCurationLengths;
@property (nonatomic, readonly) unsigned long long defaultCurationLength;

- (unsigned long long)availableCurationLengths;
- (unsigned long long)defaultCurationLength;
- (id)init;
- (id)initWithAvailableLengths:(unsigned long long)arg1 defaultLength:(unsigned long long)arg2;

@end
