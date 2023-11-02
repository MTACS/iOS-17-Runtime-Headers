
@interface INIntentSummary : NSObject {
    unsigned long long  _containedProperties;
    NSString * _intentIdentifier;
    NSString * _languageCode;
    NSString * _originatingBundleId;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long containedProperties;
@property (nonatomic, readonly, copy) NSString *intentIdentifier;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly, copy) NSString *originatingBundleId;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)containedProperties;
- (id)initWithIntentIdentifier:(id)arg1 originatingBundleId:(id)arg2 languageCode:(id)arg3;
- (id)intentIdentifier;
- (id)languageCode;
- (id)originatingBundleId;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
