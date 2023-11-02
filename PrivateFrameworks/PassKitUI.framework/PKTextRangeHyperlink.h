
@interface PKTextRangeHyperlink : NSObject {
    id /* block */  _action;
    NSString * _linkText;
}

@property (nonatomic, readonly, copy) id /* block */ action;
@property (nonatomic, readonly, copy) NSString *linkText;

+ (id)hyperlinkSourcesFromApplyFooter:(id)arg1 linkTapped:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)action;
- (unsigned long long)hash;
- (id)initWithLinkText:(id)arg1 action:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (id)linkText;

@end
