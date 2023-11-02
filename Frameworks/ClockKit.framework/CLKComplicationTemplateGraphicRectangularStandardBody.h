
@interface CLKComplicationTemplateGraphicRectangularStandardBody : CLKComplicationTemplate {
    CLKTextProvider * _body1TextProvider;
    CLKTextProvider * _body2TextProvider;
    CLKFullColorImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *body1TextProvider;
@property (nonatomic, copy) CLKTextProvider *body2TextProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;

+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3;
+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 body2TextProvider:(id)arg4;
+ (id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2;
+ (id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)body1TextProvider;
- (id)body2TextProvider;
- (long long)compatibleFamily;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 body2TextProvider:(id)arg4;
- (id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2;
- (id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3;
- (void)setBody1TextProvider:(id)arg1;
- (void)setBody2TextProvider:(id)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;

@end
