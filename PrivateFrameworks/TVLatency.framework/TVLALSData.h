
@interface TVLALSData : NSObject {
    NSNumber * _cct;
    NSArray * _channelData;
    NSNumber * _lux;
    NSNumber * _x;
    NSNumber * _y;
    NSNumber * _z;
}

@property (nonatomic, retain) NSNumber *cct;
@property (nonatomic, retain) NSArray *channelData;
@property (nonatomic, retain) NSNumber *lux;
@property (nonatomic, retain) NSNumber *x;
@property (nonatomic, retain) NSNumber *y;
@property (nonatomic, retain) NSNumber *z;

+ (id)instanceFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)cct;
- (id)channelData;
- (id)description;
- (id)dictionaryRepresentation;
- (id)lux;
- (void)setCct:(id)arg1;
- (void)setChannelData:(id)arg1;
- (void)setLux:(id)arg1;
- (void)setX:(id)arg1;
- (void)setY:(id)arg1;
- (void)setZ:(id)arg1;
- (id)x;
- (id)y;
- (id)z;

@end
