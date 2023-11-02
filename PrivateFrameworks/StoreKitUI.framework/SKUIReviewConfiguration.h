
@interface SKUIReviewConfiguration : NSObject {
    NSString * _allVersionsURLString;
    NSString * _currentVersionURLString;
    NSString * _pageNumberQueryParameter;
    NSString * _ratingURLString;
}

@property (nonatomic, readonly) NSString *allVersionsURLString;
@property (nonatomic, readonly) NSString *currentVersionURLString;
@property (nonatomic, readonly) NSString *pageNumberQueryParameter;
@property (nonatomic, readonly) NSString *ratingURLString;

- (void).cxx_destruct;
- (id)allVersionsURLString;
- (id)currentVersionURLString;
- (id)initWithConfigurationDictionary:(id)arg1;
- (id)pageNumberQueryParameter;
- (id)ratingURLString;

@end
