
@interface TSUserInPurchaseFlowAssertion : NSObject {
    int  _assertionCounter;
}

+ (id)sharedInstance;

- (void)assertUserInPurchaseFlowStartOver:(bool)arg1;
- (void)deassertUserInPurchaseFlowWithForce:(bool)arg1;
- (id)init;

@end
