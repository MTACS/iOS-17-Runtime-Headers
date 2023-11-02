
@interface ATXBoostObject : NSObject {
    double  _gymBoost;
    double  _gymScale;
    double  _homeBoost;
    double  _homeScale;
    double  _schoolBoost;
    double  _schoolScale;
    double  _workBoost;
    double  _workScale;
}

@property (nonatomic, readonly) double gymBoost;
@property (nonatomic, readonly) double gymScale;
@property (nonatomic, readonly) double homeBoost;
@property (nonatomic, readonly) double homeScale;
@property (nonatomic, readonly) double schoolBoost;
@property (nonatomic, readonly) double schoolScale;
@property (nonatomic, readonly) double workBoost;
@property (nonatomic, readonly) double workScale;

- (double)gymBoost;
- (double)gymScale;
- (double)homeBoost;
- (double)homeScale;
- (id)initWithDictionary:(id)arg1;
- (double)schoolBoost;
- (double)schoolScale;
- (double)workBoost;
- (double)workScale;

@end
