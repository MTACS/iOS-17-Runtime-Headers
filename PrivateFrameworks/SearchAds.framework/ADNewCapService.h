
@interface ADNewCapService : NSObject {
    ADCapData * _capData;
    double  _clickExpirationThresholdInSeconds;
    double  _frequencyCapExpirationInSeconds;
    unsigned long long  _maxClickCapElements;
    unsigned long long  _maxFrequencyCapElements;
    long long  _storageType;
}

@property (nonatomic, retain) ADCapData *capData;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxClickCapElements;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) long long storageType;

- (void).cxx_destruct;
- (id)capData;
- (void)cleanDownloadData;
- (id)clickCountByLine;
- (double)clickExpirationThresholdInSeconds;
- (double)frequencyCapExpirationInSeconds;
- (id)impressionCountByLine;
- (id)init;
- (id)initWithStorageType:(long long)arg1;
- (unsigned long long)maxClickCapElements;
- (unsigned long long)maxFrequencyCapElements;
- (void)setCapData:(id)arg1;
- (void)setClickExpirationThresholdInSeconds:(double)arg1;
- (void)setFrequencyCapExpirationInSeconds:(double)arg1;
- (void)setMaxClickCapElements:(unsigned long long)arg1;
- (void)setMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)setStorageType:(long long)arg1;
- (long long)storageType;
- (void)updateCapData:(id)arg1 forType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateClickData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateDownloadData:(id)arg1 forType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateFrequencyCapData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
