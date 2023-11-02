
@interface FCLocalArea : NSObject {
    NSArray * _bbox;
    NSString * _identifier;
    bool  _isBboxValid;
    NSArray * _regionIds;
}

@property (nonatomic, readonly) NSString *areaID;
@property (nonatomic, retain) NSArray *bbox;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isBboxValid;
@property (nonatomic, readonly) double maxLat;
@property (nonatomic, readonly) double maxLon;
@property (nonatomic, readonly) double minLat;
@property (nonatomic, readonly) double minLon;
@property (nonatomic, readonly) NSArray *regionIds;

- (void).cxx_destruct;
- (id)areaID;
- (id)bbox;
- (bool)containsLocation:(id)arg1;
- (bool)containsPointAtLatitude:(double)arg1 longitude:(double)arg2;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 bbox:(id)arg2 regionIDs:(id)arg3;
- (bool)isBboxValid;
- (bool)isValue:(double)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (double)maxLat;
- (double)maxLon;
- (double)minLat;
- (double)minLon;
- (id)regionIds;
- (void)setBbox:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
