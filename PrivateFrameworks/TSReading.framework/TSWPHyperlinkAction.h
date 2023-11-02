
@interface TSWPHyperlinkAction : TSWPTwoPartAction {
    TSWPHyperlinkField * _hyperlinkField;
    TSDRep<TSWPHyperlinkHostRepProtocol> * _hyperlinkRep;
}

+ (id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(id /* block */)arg3;

- (void)dealloc;
- (id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(id /* block */)arg3;

@end
