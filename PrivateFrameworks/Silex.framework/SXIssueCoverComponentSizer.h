
@interface SXIssueCoverComponentSizer : SXComponentSizer {
    <SXIssueCoverLayoutAttributesFactory> * _layoutOptionsFactory;
}

@property (nonatomic, readonly) <SXIssueCoverLayoutAttributesFactory> *layoutOptionsFactory;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 layoutOptionsFactory:(id)arg6;
- (id)layoutOptionsFactory;

@end
