
@interface SBUpdateContinuousExposeStripsPresentationResponse : SBSwitcherModifierEventResponse {
    unsigned long long  _dismissalOptions;
    unsigned long long  _presentationOptions;
}

@property (nonatomic, readonly) unsigned long long dismissalOptions;
@property (nonatomic, readonly) unsigned long long presentationOptions;

- (unsigned long long)dismissalOptions;
- (id)initWithPresentationOptions:(unsigned long long)arg1 dismissalOptions:(unsigned long long)arg2;
- (unsigned long long)presentationOptions;
- (long long)type;

@end
