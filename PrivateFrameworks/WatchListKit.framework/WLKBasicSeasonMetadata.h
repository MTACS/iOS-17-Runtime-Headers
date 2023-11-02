
@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata {
    NSString * _canonicalShowID;
    NSNumber * _seasonNumber;
}

@property (nonatomic, readonly, copy) NSString *canonicalShowID;
@property (nonatomic, readonly) NSNumber *seasonNumber;

+ (id)seasonsWithDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)canonicalShowID;
- (id)initWithDictionary:(id)arg1;
- (id)seasonNumber;

@end
