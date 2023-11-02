
@interface CERecommendationRule : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    CERuleCriteria * _criteria;
    bool  _ignoreClientRank;
    NSNumber * _lastCompletedTimeStamp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _messageHint;
    NSNumber * _rankingHint;
    NSString * _recommendationID;
    CERecommendationStringTemplate * _templates;
    NSString * _titleHint;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) CERuleCriteria *criteria;
@property (nonatomic) bool ignoreClientRank;
@property (nonatomic, retain) NSNumber *lastCompletedTimeStamp;
@property (nonatomic, copy) NSString *messageHint;
@property (nonatomic, copy) NSNumber *rankingHint;
@property (nonatomic, copy) NSString *recommendationID;
@property (nonatomic, retain) CERecommendationStringTemplate *templates;
@property (nonatomic, copy) NSString *titleHint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreClientRank;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)lastCompletedTimeStamp;
- (id)messageHint;
- (id)rankingHint;
- (id)recommendationID;
- (void)setBundleID:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setIgnoreClientRank:(bool)arg1;
- (void)setLastCompletedTimeStamp:(id)arg1;
- (void)setMessageHint:(id)arg1;
- (void)setRankingHint:(id)arg1;
- (void)setRecommendationID:(id)arg1;
- (void)setTemplates:(id)arg1;
- (void)setTitleHint:(id)arg1;
- (id)templates;
- (id)titleHint;

@end
