
@interface PKPaymentSetupAssistantCoreCredential : NSObject {
    PKPaymentCredential * _credential;
    NSString * _subtitle;
    NSString * _title;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, retain) PKPaymentCredential *credential;
@property (nonatomic, readonly, retain) NSString *subtitle;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, retain) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)credential;
- (id)description;
- (id)initWithPaymentCredential:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)uniqueIdentifier;

@end
