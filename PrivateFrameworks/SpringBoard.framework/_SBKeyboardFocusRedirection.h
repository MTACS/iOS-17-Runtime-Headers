
@interface _SBKeyboardFocusRedirection : NSObject {
    int  _fromProcessIdentifier;
    BKSHIDEventDeferringToken * _fromToken;
    NSString * _reason;
    int  _toProcessIdentifier;
    BKSHIDEventDeferringToken * _toToken;
}

- (void).cxx_destruct;
- (id)description;

@end
