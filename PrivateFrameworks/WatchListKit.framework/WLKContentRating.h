
@interface WLKContentRating : NSObject {
    NSString * _contentRatingSystem;
    NSString * _displayName;
    NSString * _name;
    unsigned long long  _ratingValue;
    unsigned long long  _systemType;
}

@property (nonatomic, readonly, copy) NSString *contentRatingSystem;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long ratingValue;
@property (nonatomic, readonly) unsigned long long systemType;

- (void).cxx_destruct;
- (id)contentRatingSystem;
- (id)displayName;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (unsigned long long)ratingValue;
- (unsigned long long)systemType;

@end
