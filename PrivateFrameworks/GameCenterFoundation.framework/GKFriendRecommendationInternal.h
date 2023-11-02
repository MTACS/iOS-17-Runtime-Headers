
@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal {
    NSString * _reason;
    NSString * _reason2;
    unsigned int  _rid;
    int  _source;
}

@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)defaultFamiliarity;
- (id)reason;
- (id)reason2;
- (unsigned int)rid;
- (void)setReason2:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRid:(unsigned int)arg1;
- (void)setSource:(int)arg1;
- (int)source;

@end
