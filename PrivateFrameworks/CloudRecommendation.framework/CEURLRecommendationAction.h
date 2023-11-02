
@interface CEURLRecommendationAction : CERecommendationAction {
    NSURL * _actionURL;
}

@property (nonatomic, retain) NSURL *actionURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionType:(id)arg2 title:(id)arg3 actionURL:(id)arg4;
- (void)setActionURL:(id)arg1;

@end
