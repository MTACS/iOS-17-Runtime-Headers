
@interface CERuleConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _actionURL;
    NSURL * _completedURL;
    NSURL * _dismissURL;
    NSURL * _displayURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _maxRecommendationsToShow;
    NSArray * _ruleset;
    NSDictionary * _thresholds;
}

@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, retain) NSURL *completedURL;
@property (nonatomic, retain) NSURL *dismissURL;
@property (nonatomic, retain) NSURL *displayURL;
@property (nonatomic, retain) NSNumber *maxRecommendationsToShow;
@property (nonatomic, readonly) NSArray *ruleset;
@property (nonatomic, readonly) NSDictionary *thresholds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionURL;
- (id)completedURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dismissURL;
- (id)displayURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)maxRecommendationsToShow;
- (id)ruleset;
- (void)setActionURL:(id)arg1;
- (void)setCompletedURL:(id)arg1;
- (void)setDismissURL:(id)arg1;
- (void)setDisplayURL:(id)arg1;
- (void)setMaxRecommendationsToShow:(id)arg1;
- (id)thresholds;

@end
