
@interface SFResultSection : NSObject <NSCopying, NSSecureCoding, SFJSONSerializable> {
    NSString * _bundleIdentifier;
    SFCommandButtonItem * _button;
    NSString * _identifier;
    bool  _isInitiallyHidden;
    unsigned long long  _maxInitiallyVisibleResults;
    NSString * _moreText;
    double  _rankingScore;
    NSArray * _results;
    NSString * _subtitle;
    NSString * _title;
    SFCommandButtonItem * _titleButtonItem;
    unsigned long long  _totalAvailableResults;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) SFCommandButtonItem *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isInitiallyHidden;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long maxInitiallyVisibleResults;
@property (nonatomic, copy) NSString *moreText;
@property (nonatomic) double rankingScore;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) SFCommandButtonItem *titleButtonItem;
@property (nonatomic) unsigned long long totalAvailableResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)button;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isInitiallyHidden;
- (id)jsonData;
- (unsigned long long)maxInitiallyVisibleResults;
- (id)moreText;
- (double)rankingScore;
- (id)results;
- (void)setBundleIdentifier:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsInitiallyHidden:(bool)arg1;
- (void)setMaxInitiallyVisibleResults:(unsigned long long)arg1;
- (void)setMoreText:(id)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleButtonItem:(id)arg1;
- (void)setTotalAvailableResults:(unsigned long long)arg1;
- (id)subtitle;
- (id)title;
- (id)titleButtonItem;
- (unsigned long long)totalAvailableResults;

@end
