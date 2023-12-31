
@interface VUIRatingToResourceMapper : NSObject {
    NSDictionary * _mappingDictionary;
}

@property (nonatomic, retain) NSDictionary *mappingDictionary;

- (void).cxx_destruct;
- (id)_cleanRatingName:(id)arg1;
- (id)init;
- (id)mappingDictionary;
- (id)resourceForRating:(id)arg1 ratingSystem:(id)arg2;
- (void)setMappingDictionary:(id)arg1;

@end
