
@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate {
    NSDictionary * _additionalContentAttributes;
    CLKTextProvider * _bodyTextProvider;
    CLKImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
    CLKTextProvider * _headerTrailingTextProvider;
    bool  _shouldTruncateHeaderLeadingLabelFirst;
}

@property (nonatomic, copy) NSDictionary *additionalContentAttributes;
@property (nonatomic, copy) CLKTextProvider *bodyTextProvider;
@property (nonatomic, copy) NSDate *contentDate;
@property (nonatomic, copy) CLKImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;
@property (nonatomic, copy) CLKTextProvider *headerTrailingTextProvider;
@property (nonatomic) bool shouldTruncateHeaderLeadingLabelFirst;

+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 bodyTextProvider:(id)arg3;
+ (id)templateWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateDateKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)additionalContentAttributes;
- (id)bodyTextProvider;
- (long long)compatibleFamily;
- (id)contentDate;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (id)headerTrailingTextProvider;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 bodyTextProvider:(id)arg3;
- (id)initWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2;
- (void)setAdditionalContentAttributes:(id)arg1;
- (void)setBodyTextProvider:(id)arg1;
- (void)setContentDate:(id)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (void)setHeaderTrailingTextProvider:(id)arg1;
- (void)setShouldTruncateHeaderLeadingLabelFirst:(bool)arg1;
- (bool)shouldTruncateHeaderLeadingLabelFirst;

@end
