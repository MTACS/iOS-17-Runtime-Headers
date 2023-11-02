
@interface PNRStringsFileReaderResult : NSObject {
    NSString * _city;
    NSString * _country;
    NSString * _region;
}

@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *region;
@property (nonatomic, readonly) long long score;

+ (long long)maxPossibleScore;

- (void).cxx_destruct;
- (id)aggregateStringWhileInCountry:(id)arg1 forLanguage:(id)arg2 ccOfNumber:(id)arg3;
- (id)city;
- (id)country;
- (id)initWithCountry:(id)arg1 region:(id)arg2 city:(id)arg3;
- (bool)isEqualTo:(id)arg1;
- (bool)isPlaceHolderForEmpty;
- (id)region;
- (long long)score;
- (id)separatorForLanguage:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setRegion:(id)arg1;
- (bool)shouldOrderCityFirstForLanguage:(id)arg1 phoneNumberInCC:(id)arg2;

@end