
@interface SKUIReportAConcernTemplateViewElement : SKUIViewElement {
    long long  _itemIdentifier;
    NSString * _reportConcernExplanation;
    NSURL * _reportConcernURL;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly, copy) NSArray *reasonElements;
@property (nonatomic, readonly, copy) NSString *reportConcernExplanation;
@property (nonatomic, readonly, copy) NSURL *reportConcernURL;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)itemIdentifier;
- (id)reasonElements;
- (id)reportConcernExplanation;
- (id)reportConcernURL;

@end
