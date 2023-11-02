
@interface SSBookResultBuilder : SSResultBuilder {
    NSString * _author;
    NSDate * _date;
    NSString * _genre;
}

@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *genre;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)author;
- (id)buildCompactCardSection;
- (id)date;
- (id)genre;
- (id)initWithResult:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setGenre:(id)arg1;

@end
