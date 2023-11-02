
@interface WBSLocalePair : NSObject {
    NSLocale * _sourceLocale;
    NSLocale * _targetLocale;
}

@property (nonatomic, readonly, copy) NSString *compactDescriptionForLogging;
@property (nonatomic, readonly) _LTLocalePair *lt_localePair;
@property (nonatomic, readonly) NSLocale *sourceLocale;
@property (nonatomic, readonly, copy) NSString *sourceLocaleIdentifier;
@property (nonatomic, readonly) NSLocale *targetLocale;
@property (nonatomic, readonly, copy) NSString *targetLocaleIdentifier;

- (void).cxx_destruct;
- (id)compactDescriptionForLogging;
- (id)description;
- (id)initWithLTLocalePair:(id)arg1;
- (id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2;
- (id)initWithSourceLocaleIdentifier:(id)arg1 targetLocaleIdentifier:(id)arg2;
- (id)lt_localePair;
- (id)sourceLocale;
- (id)sourceLocaleIdentifier;
- (id)targetLocale;
- (id)targetLocaleIdentifier;

@end
