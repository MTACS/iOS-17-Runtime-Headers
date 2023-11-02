
@interface SearchUICompletion : NSObject {
    NSString * _bridgeString;
    SFCardSection * _cardSection;
    bool  _completionResultIsPotentiallyPunchout;
    NSAttributedString * _completionString;
    NSString * _copyableString;
    NSString * _extensionString;
    SFImage * _image;
    SFSearchResult * _result;
    NSString * _typedString;
}

@property (nonatomic, retain) NSString *bridgeString;
@property (nonatomic, readonly) SFCardSection *cardSection;
@property (nonatomic, readonly) bool completionResultIsPotentiallyPunchout;
@property (nonatomic, retain) NSAttributedString *completionString;
@property (nonatomic, readonly) NSString *copyableString;
@property (nonatomic, retain) NSString *extensionString;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic, readonly) SFSearchResult *result;
@property (nonatomic, readonly) NSString *typedString;

+ (id)initWithTypedString:(id)arg1 result:(id)arg2 cardSection:(id)arg3;
+ (id)localizedNameForBundleIdentifier:(id)arg1;
+ (id)localizedOpenString;
+ (id)localizedSearchString;
+ (id)localizedShowMoreString;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })nonPartialRangeOfTypedString:(id)arg1 inString:(id)arg2;
+ (bool)stringMatchesWritingDirection:(id)arg1;
+ (bool)supportsResult:(id)arg1 cardSection:(id)arg2;

- (void).cxx_destruct;
- (id)bridgeString;
- (id)cardSection;
- (bool)completionResultIsPotentiallyPunchout;
- (id)completionString;
- (id)completionStringToMatch;
- (id)completionStringWithString:(id)arg1;
- (id)copyableString;
- (id)description;
- (id)extensionString;
- (id)image;
- (id)initWithTypedString:(id)arg1 result:(id)arg2 cardSection:(id)arg3;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;
- (id)result;
- (void)setBridgeString:(id)arg1;
- (void)setCompletionString:(id)arg1;
- (void)setExtensionString:(id)arg1;
- (void)setImage:(id)arg1;
- (id)typedString;
- (void)updateFields;

@end
