
@interface UITextDropRequest : NSObject <UITextDropRequest, UITextDropRequest_Private> {
    UITextPosition * _dropPosition;
    UITextRange * _dropRange;
    <UIDropSession> * _dropSession;
    bool  _sameView;
    UITextDropProposal * _suggestedProposal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITextPosition *dropPosition;
@property (nonatomic, readonly) UITextRange *dropRange;
@property (nonatomic, readonly) <UIDropSession> *dropSession;
@property (readonly) unsigned long long hash;
@property (getter=isSameView, nonatomic) bool sameView;
@property (nonatomic, retain) UITextDropProposal *suggestedProposal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dropPosition;
- (id)dropRange;
- (id)dropSession;
- (id)initWithPosition:(id)arg1 range:(id)arg2 inSession:(id)arg3;
- (bool)isSameView;
- (void)setSameView:(bool)arg1;
- (void)setSuggestedProposal:(id)arg1;
- (id)suggestedProposal;

@end
