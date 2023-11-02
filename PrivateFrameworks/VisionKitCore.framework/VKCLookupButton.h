
@interface VKCLookupButton : VKCTappableView {
    <VKCLookupButtonDelegate> * _delegate;
}

@property (nonatomic) <VKCLookupButtonDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
