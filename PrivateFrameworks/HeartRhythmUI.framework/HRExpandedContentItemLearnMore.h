
@interface HRExpandedContentItemLearnMore : NSObject {
    <HRLinkTextViewDelegate> * _delegate;
    long long  _urlIdentifier;
}

@property (nonatomic) <HRLinkTextViewDelegate> *delegate;
@property (nonatomic) long long urlIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithURLIdentifier:(long long)arg1 delegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUrlIdentifier:(long long)arg1;
- (long long)urlIdentifier;

@end
