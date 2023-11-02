
@interface NSCloudKitMirroringDelegateWorkBlockContext : NSObject {
    unsigned long long  _powerAssertionID;
    NSString * _powerAssertionLabel;
    NSString * _transactionLabel;
    id  _uiAppInstance;
}

- (void)dealloc;
- (id)initWithTransactionLabel:(id)arg1 powerAssertionLabel:(id)arg2;

@end
