
@interface _UITouchForwardingRecipient : NSObject {
    long long  autocompletedPhase;
    UIResponder * fromResponder;
    long long  recordedPhase;
    UIResponder * responder;
}

@property (nonatomic) UIResponder *responder;

- (void).cxx_destruct;
- (id)description;
- (id)responder;
- (void)setResponder:(id)arg1;

@end
