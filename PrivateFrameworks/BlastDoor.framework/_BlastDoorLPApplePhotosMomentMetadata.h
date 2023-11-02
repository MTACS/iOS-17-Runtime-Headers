
@interface _BlastDoorLPApplePhotosMomentMetadata : _BlastDoorLPSpecializationMetadata {
    NSDate * _earliestAssetDate;
    NSDate * _expirationDate;
    _BlastDoorLPImage * _keyPhoto;
    NSDate * _latestAssetDate;
    unsigned long long  _otherItemCount;
    unsigned long long  _photoCount;
    NSString * _title;
    unsigned long long  _videoCount;
}

@property (nonatomic, copy) NSDate *earliestAssetDate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) _BlastDoorLPImage *keyPhoto;
@property (nonatomic, copy) NSDate *latestAssetDate;
@property (nonatomic) unsigned long long otherItemCount;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long videoCount;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestAssetDate;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPhoto;
- (id)latestAssetDate;
- (unsigned long long)otherItemCount;
- (unsigned long long)photoCount;
- (void)setEarliestAssetDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeyPhoto:(id)arg1;
- (void)setLatestAssetDate:(id)arg1;
- (void)setOtherItemCount:(unsigned long long)arg1;
- (void)setPhotoCount:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideoCount:(unsigned long long)arg1;
- (id)title;
- (unsigned long long)videoCount;

@end
