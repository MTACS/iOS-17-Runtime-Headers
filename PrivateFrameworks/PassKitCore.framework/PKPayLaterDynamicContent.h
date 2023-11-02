
@interface PKPayLaterDynamicContent : NSObject {
    NSDictionary * _contentByPageType;
}

+ (id)_contentByPageTypeFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dynamicContentPageForPageType:(unsigned long long)arg1;
- (id)dynamicContentPageForPageType:(unsigned long long)arg1 productType:(unsigned long long)arg2 optionIdentifier:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end
