
@interface ADCapData : ADSingleton {
    NSMutableArray * _clickCountData;
    NSMutableArray * _downloadData;
    NSMutableArray * _frequencyCapData;
    NSString * _keychainKey;
    long long  _storageType;
    NSString * _title;
    NSString * _toroID;
}

@property (nonatomic, retain) NSMutableArray *clickCountData;
@property (nonatomic, retain) NSMutableArray *downloadData;
@property (nonatomic, retain) NSMutableArray *frequencyCapData;
@property (nonatomic, retain) NSString *keychainKey;
@property (nonatomic) long long storageType;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *toroID;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addCapDataObject:(id)arg1 ofKind:(long long)arg2;
- (id)capData:(id)arg1;
- (id)capDataJSON:(id)arg1;
- (void)checkAndUpdateToroID;
- (id)clickCapObjectForAdamID:(id)arg1;
- (id)clickCountData;
- (id)dictionaryRepresentation;
- (id)downloadData;
- (id)downloadObjectForAdamID:(id)arg1;
- (void)eraseCapData;
- (id)filteredCapData:(id)arg1 maxItems:(unsigned long long)arg2 expirationThresholdInSeconds:(double)arg3;
- (id)frequencyCapData;
- (id)init;
- (id)initWithStorageType:(long long)arg1;
- (id)initWithStorageType:(long long)arg1 keychainKey:(id)arg2 title:(id)arg3;
- (id)keychainKey;
- (void)resetCapDataObject;
- (void)restoreAllCapData;
- (id)restoreCapDataArrayFromPlist:(id)arg1;
- (void)saveCapDataWithReason:(id)arg1;
- (void)setClickCountData:(id)arg1;
- (void)setDownloadData:(id)arg1;
- (void)setFrequencyCapData:(id)arg1;
- (void)setKeychainKey:(id)arg1;
- (void)setStorageType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setToroID:(id)arg1;
- (long long)storageType;
- (id)title;
- (id)toroID;
- (void)updateCapDataWith:(id)arg1 ofKind:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds

- (void)cleanDownloadArray;
- (void)cleanDownloadArrayWithMaxClickElements:(unsigned long long)arg1 expirationClickThreshold:(double)arg2;
- (id)clickCountByLine;
- (id)clickCountByLineMaxClickElements:(unsigned long long)arg1 expirationClickThreshold:(double)arg2;
- (id)impressionCountByLine;
- (id)impressionCountByLineWithMaxFrequencyElements:(unsigned long long)arg1 expirationFrequencyThreshold:(double)arg2;

@end
