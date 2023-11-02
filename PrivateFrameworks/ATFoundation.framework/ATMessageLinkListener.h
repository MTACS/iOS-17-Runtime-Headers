
@interface ATMessageLinkListener : NSObject {
    <ATMessageLinkListenerDelegate> * _delegate;
}

@property (nonatomic) <ATMessageLinkListenerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (bool)start;
- (void)stop;

@end
