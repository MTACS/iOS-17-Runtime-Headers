
@interface CEServerRecommendations : NSObject <NSCopying, NSSecureCoding> {
    CERecommendationPage * _page;
    NSArray * _recommendations;
    NSArray * _sections;
}

@property (nonatomic, retain) CERecommendationPage *page;
@property (nonatomic, retain) NSArray *recommendations;
@property (nonatomic, retain) NSArray *sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)page;
- (id)recommendations;
- (id)sections;
- (void)setPage:(id)arg1;
- (void)setRecommendations:(id)arg1;
- (void)setSections:(id)arg1;

@end
