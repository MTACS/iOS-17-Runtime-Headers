
@interface CERuleset : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _context;
    bool  _ignoreClientSectionRank;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _maxRecommendations;
    NSArray * _recommendationRules;
    NSString * _sectionID;
    NSString * _userType;
}

@property (nonatomic, readonly) NSArray *context;
@property (nonatomic) bool ignoreClientSectionRank;
@property (nonatomic, retain) NSNumber *maxRecommendations;
@property (nonatomic, retain) NSArray *recommendationRules;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *userType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreClientSectionRank;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)maxRecommendations;
- (id)recommendationRules;
- (id)sectionID;
- (void)setIgnoreClientSectionRank:(bool)arg1;
- (void)setMaxRecommendations:(id)arg1;
- (void)setRecommendationRules:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setUserType:(id)arg1;
- (id)userType;

@end
