
@interface PKPaymentSheetExperiment : PKExperiment

@property (nonatomic, readonly) bool isAA;
@property (nonatomic, readonly) bool isTaggedForAllowInAppPaymentFailureRetry;
@property (nonatomic, readonly) bool isTaggedForHideDoubleClickToPay;
@property (nonatomic, readonly) bool isTaggedForLineItemsInMainPaymentSheet;
@property (nonatomic, readonly) bool shouldAllowInAppPaymentFailureRetry;
@property (nonatomic, readonly) bool shouldHideDoubleClickToPay;
@property (nonatomic, readonly) bool shouldShowLineItemsInMainPaymentSheet;
@property (nonatomic, readonly) double timeIntervalToShowDoubleClickToPay;

- (bool)isAA;
- (bool)isTaggedForAllowInAppPaymentFailureRetry;
- (bool)isTaggedForHideDoubleClickToPay;
- (bool)isTaggedForLineItemsInMainPaymentSheet;
- (id)namespaceName;
- (bool)shouldAllowInAppPaymentFailureRetry;
- (bool)shouldHideDoubleClickToPay;
- (bool)shouldShowLineItemsInMainPaymentSheet;
- (double)timeIntervalToShowDoubleClickToPay;

@end
