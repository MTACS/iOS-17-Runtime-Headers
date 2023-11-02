
@interface SKUIItemContentRating : NSObject {
    NSString * _contentRank;
    NSArray * _contentRatingAdvisories;
    NSString * _contentRatingName;
    NSString * _contentRatingSystemName;
}

@property (nonatomic, readonly) NSString *contentRank;
@property (nonatomic, readonly) NSArray *contentRatingAdvisories;
@property (nonatomic, readonly) NSString *contentRatingName;
@property (nonatomic, readonly) NSString *contentRatingSystemName;

- (void).cxx_destruct;
- (id)contentRank;
- (id)contentRatingAdvisories;
- (id)contentRatingName;
- (id)contentRatingSystemName;
- (id)description;
- (id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2;

@end
