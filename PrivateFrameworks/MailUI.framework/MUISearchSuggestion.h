
@interface MUISearchSuggestion : NSObject <EFPubliclyDescribable, NSSecureCoding> {
    <MUISearchSuggestionDelegate> * _delegate;
    CSSuggestion * _spotlightSuggestion;
}

@property (nonatomic, readonly) MUISearchSuggestionCategory *category;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUISearchSuggestionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) bool exactMatch;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLegacy;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) double ranking;
@property (nonatomic, readonly) CSSuggestion *spotlightSuggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRanking;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)delegate;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)exactMatch;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLegacy;
- (id)predicate;
- (double)ranking;
- (void)setDelegate:(id)arg1;
- (id)spotlightSuggestion;
- (bool)supportsRanking;

@end
