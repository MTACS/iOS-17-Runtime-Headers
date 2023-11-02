
@interface SFCardViewDisappearFeedback : SFFeedback <CRCardViewDisappearanceFeedback> {
    SFCard * _card;
    unsigned long long  _cardDisappearEvent;
}

@property (nonatomic, readonly) SFCardViewDisappearFeedback *backingFeedback;
@property (nonatomic, readonly) SFCard *card;
@property (nonatomic) unsigned long long cardDisappearEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)card;
- (unsigned long long)cardDisappearEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCard:(id)arg1 event:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;
- (void)setCardDisappearEvent:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
