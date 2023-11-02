
@interface ICQUIInlineTipViewModel : NSObject {
    ICQInlineTip * _tip;
}

@property (nonatomic, readonly, copy) AMSUIMessageRequest *request;
@property (nonatomic, readonly, copy) ICQInlineTip *tip;
@property (nonatomic, readonly, copy) AMSUIBubbleTipInlineAnchorInfo *tipArrow;

- (void).cxx_destruct;
- (id)_tipTintColorName;
- (id)initWithInlineTip:(id)arg1;
- (id)request;
- (id)tip;
- (id)tipArrow;

@end
