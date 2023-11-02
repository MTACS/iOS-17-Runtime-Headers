
@interface _LTCombinedTranslationResult : NSObject <NSSecureCoding> {
    _LTDisambiguableResult * _disambiguableResult;
    bool  _isFinal;
    _LTLocalePair * _localePair;
    NSArray * _paragraphResults;
    long long  _route;
}

@property (nonatomic, retain) _LTDisambiguableResult *disambiguableResult;
@property (nonatomic, readonly) bool isFinal;
@property (nonatomic, readonly) _LTLocalePair *localePair;
@property (nonatomic, readonly, copy) NSArray *paragraphResults;
@property (nonatomic, readonly) long long route;
@property (nonatomic, readonly, copy) NSAttributedString *translatedText;

+ (id)_translatedTextWithAttributesForResult:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)disambiguableResult;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParagraphResults:(id)arg1 localePair:(id)arg2;
- (bool)isFinal;
- (id)localePair;
- (id)paragraphResults;
- (long long)route;
- (void)setDisambiguableResult:(id)arg1;
- (id)translatedText;

@end
