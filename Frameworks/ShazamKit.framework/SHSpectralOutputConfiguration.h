
@interface SHSpectralOutputConfiguration : NSObject {
    long long  _callbackFrequency;
    long long  _numberOfBins;
}

@property (nonatomic, readonly) long long callbackFrequency;
@property (nonatomic, readonly) long long numberOfBins;

+ (bool)validateCallbackFrequency:(long long)arg1;
+ (bool)validateNumberOfBins:(long long)arg1;

- (long long)callbackFrequency;
- (id)init;
- (id)initWithNumberOfBins:(long long)arg1 callbackFrequency:(long long)arg2;
- (long long)numberOfBins;

@end
