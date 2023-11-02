
@interface ATXHeroData : NSObject <ATXProtoBufWrapper, ATXSuggestionExecutableProtocol, NSCopying, NSSecureCoding> {
    unsigned long long  _adamId;
    NSString * _bundleId;
    CPSClipMetadata * _clipMetadata;
    bool  _isTouristApp;
    double  _latitude;
    double  _latitudeAtPredictionTime;
    double  _longitude;
    double  _longitudeAtPredictionTime;
    NSString * _poiCategory;
    NSNumber * _poiMuid;
    unsigned long long  _radiusInMeters;
    unsigned long long  _rank;
    double  _score;
    NSString * _urlHash;
}

@property (nonatomic) unsigned long long adamId;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) CPSClipMetadata *clipMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTouristApp;
@property (nonatomic) double latitude;
@property (nonatomic) double latitudeAtPredictionTime;
@property (nonatomic) double longitude;
@property (nonatomic) double longitudeAtPredictionTime;
@property (nonatomic, retain) NSString *poiCategory;
@property (nonatomic, retain) NSNumber *poiMuid;
@property (nonatomic) unsigned long long radiusInMeters;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) double score;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *urlHash;

// Image: /System/Library/PrivateFrameworks/HeroDataClient.framework/HeroDataClient

+ (id)copyClipMetadata:(id)arg1;
+ (bool)isClipMetadataEqual:(id)arg1 other:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)adamId;
- (id)bundleId;
- (bool)checkAndReportDecodingFailureIfNeededForBOOL:(bool)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)clipMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictedAdamId:(unsigned long long)arg1 bundleId:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radiusInMeters:(unsigned long long)arg5 rank:(unsigned long long)arg6 isTouristApp:(bool)arg7 score:(double)arg8 urlHash:(id)arg9 clipMetadata:(id)arg10;
- (id)initWithPredictedAdamId:(unsigned long long)arg1 bundleId:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radiusInMeters:(unsigned long long)arg5 rank:(unsigned long long)arg6 isTouristApp:(bool)arg7 score:(double)arg8 urlHash:(id)arg9 clipMetadata:(id)arg10 poiCategory:(id)arg11;
- (id)initWithPredictedAdamId:(unsigned long long)arg1 bundleId:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radiusInMeters:(unsigned long long)arg5 rank:(unsigned long long)arg6 isTouristApp:(bool)arg7 score:(double)arg8 urlHash:(id)arg9 clipMetadata:(id)arg10 poiCategory:(id)arg11 poiMuid:(id)arg12;
- (id)initWithPredictedAdamId:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 radiusInMeters:(unsigned long long)arg4 rank:(unsigned long long)arg5 isTouristApp:(bool)arg6;
- (id)initWithPredictedBundleId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radiusInMeters:(unsigned long long)arg4 rank:(unsigned long long)arg5 isTouristApp:(bool)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTouristApp;
- (double)latitude;
- (double)latitudeAtPredictionTime;
- (double)longitude;
- (double)longitudeAtPredictionTime;
- (id)poiCategory;
- (id)poiMuid;
- (id)proto;
- (unsigned long long)radiusInMeters;
- (unsigned long long)rank;
- (double)score;
- (void)setAdamId:(unsigned long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setClipMetadata:(id)arg1;
- (void)setIsTouristApp:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLatitudeAtPredictionTime:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setLongitudeAtPredictionTime:(double)arg1;
- (void)setPoiCategory:(id)arg1;
- (void)setPoiMuid:(id)arg1;
- (void)setRadiusInMeters:(unsigned long long)arg1;
- (void)setRank:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (void)setUrlHash:(id)arg1;
- (id)urlHash;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;

@end
