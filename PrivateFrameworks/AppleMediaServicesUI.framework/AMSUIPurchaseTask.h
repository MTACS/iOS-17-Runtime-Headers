
@interface AMSUIPurchaseTask : AMSPurchaseTask

@property (nonatomic) <AMSUIPurchaseDelegate> *delegate;

- (Class)paymentSheetTaskClass;

@end
