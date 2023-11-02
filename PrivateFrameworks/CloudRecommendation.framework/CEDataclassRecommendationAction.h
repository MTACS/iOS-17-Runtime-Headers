
@interface CEDataclassRecommendationAction : CERecommendationAction {
    NSArray * _dataclasses;
}

@property (nonatomic, retain) NSArray *dataclasses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataclasses;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 dataclasses:(id)arg3;
- (void)setDataclasses:(id)arg1;

@end
