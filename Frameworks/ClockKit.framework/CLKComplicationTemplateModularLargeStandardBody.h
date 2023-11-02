
@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate {
    CLKImageProvider * _body1ImageProvider;
    CLKTextProvider * _body1TextProvider;
    CLKTextProvider * _body2TextProvider;
    CLKImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
    CLKTextProvider * _headerTrailingTextProvider;
    bool  _shouldTruncateHeaderLeadingLabelFirst;
}

@property (nonatomic, copy) CLKImageProvider *body1ImageProvider;
@property (nonatomic, copy) CLKTextProvider *body1TextProvider;
@property (nonatomic, copy) CLKTextProvider *body2TextProvider;
@property (nonatomic, copy) CLKImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;
@property (nonatomic, copy) CLKTextProvider *headerTrailingTextProvider;
@property (nonatomic) bool shouldTruncateHeaderLeadingLabelFirst;

+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3;
+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 body2TextProvider:(id)arg4;
+ (id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2;
+ (id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3;

- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)body1ImageProvider;
- (id)body1TextProvider;
- (id)body2TextProvider;
- (long long)compatibleFamily;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (id)headerTrailingTextProvider;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 body2TextProvider:(id)arg4;
- (id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2;
- (id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3;
- (void)setBody1ImageProvider:(id)arg1;
- (void)setBody1TextProvider:(id)arg1;
- (void)setBody2TextProvider:(id)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (void)setHeaderTrailingTextProvider:(id)arg1;
- (void)setShouldTruncateHeaderLeadingLabelFirst:(bool)arg1;
- (bool)shouldTruncateHeaderLeadingLabelFirst;

@end
