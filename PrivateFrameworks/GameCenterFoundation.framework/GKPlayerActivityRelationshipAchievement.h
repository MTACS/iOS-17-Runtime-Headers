
@interface GKPlayerActivityRelationshipAchievement : GKPlayerActivityRelationshipBase {
    NSString * _achDescription;
    long long  _progress;
    NSDate * _timeStamp;
}

@property (nonatomic, retain) NSString *achDescription;
@property (nonatomic) long long progress;
@property (nonatomic, retain) NSDate *timeStamp;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)achDescription;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (long long)progress;
- (void)setAchDescription:(id)arg1;
- (void)setProgress:(long long)arg1;
- (void)setTimeStamp:(id)arg1;
- (id)timeStamp;

@end
