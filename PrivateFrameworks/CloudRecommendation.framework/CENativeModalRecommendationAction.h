
@interface CENativeModalRecommendationAction : CERecommendationAction {
    Class  _detailControllerClass;
}

@property (nonatomic, retain) Class detailControllerClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (Class)detailControllerClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 detailControllerClass:(Class)arg3;
- (void)setDetailControllerClass:(Class)arg1;

@end
