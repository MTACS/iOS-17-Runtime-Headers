
@interface SXEmbedComponentSizer : SXComponentSizer {
    <SXEmbedDataProvider> * _embedDataProvider;
}

@property (nonatomic, readonly) <SXEmbedDataProvider> *embedDataProvider;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)embedDataProvider;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 embedDataProvider:(id)arg6;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inColumnLayout:(id)arg2;

@end
