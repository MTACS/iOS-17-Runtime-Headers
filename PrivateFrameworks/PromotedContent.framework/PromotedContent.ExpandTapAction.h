
@interface PromotedContent.ExpandTapAction : APPCTapAction {
    void adIdentifier;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  expandedDestinationURL;
    void maximumExpandedSize;
}

- (void).cxx_destruct;
- (id)initWithActionType:(long long)arg1 confirmedClickInterval:(double)arg2;

@end
