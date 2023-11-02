
@interface _CPEngagementTriggerRatio : PBCodable <NSSecureCoding, _CPEngagementTriggerRatio> {
    float  _go;
    float  _tap;
    int  _totalEngagements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float go;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) float tap;
@property (nonatomic) int totalEngagements;

- (float)go;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGo:(float)arg1;
- (void)setTap:(float)arg1;
- (void)setTotalEngagements:(int)arg1;
- (float)tap;
- (int)totalEngagements;
- (void)writeTo:(id)arg1;

@end
