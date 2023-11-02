
@interface _CPImagesUsagePropensity : PBCodable <NSSecureCoding, _CPImagesUsagePropensity> {
    float  _image;
    float  _other;
    float  _querySuggestion;
    float  _recentResult;
    int  _totalEngagements;
    float  _zkw;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float image;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float other;
@property (nonatomic) float querySuggestion;
@property (nonatomic) float recentResult;
@property (readonly) Class superclass;
@property (nonatomic) int totalEngagements;
@property (nonatomic) float zkw;

- (unsigned long long)hash;
- (float)image;
- (bool)isEqual:(id)arg1;
- (float)other;
- (float)querySuggestion;
- (bool)readFrom:(id)arg1;
- (float)recentResult;
- (void)setImage:(float)arg1;
- (void)setOther:(float)arg1;
- (void)setQuerySuggestion:(float)arg1;
- (void)setRecentResult:(float)arg1;
- (void)setTotalEngagements:(int)arg1;
- (void)setZkw:(float)arg1;
- (int)totalEngagements;
- (void)writeTo:(id)arg1;
- (float)zkw;

@end
