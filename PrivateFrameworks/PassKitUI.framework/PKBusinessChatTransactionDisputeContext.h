
@interface PKBusinessChatTransactionDisputeContext : NSObject <PKBusinessChatContext> {
    PKAccount * _account;
    PKAccountUser * _accountUser;
    bool  _disputingAccountUserTransaction;
    PKFamilyMember * _familyMember;
    long long  _intent;
    PKPaymentPass * _paymentPass;
    NSSet * _physicalCards;
    PKAccountSupportTopic * _topic;
    PKPaymentTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_formattedBodyTextForTopicBodyText:(id)arg1;
- (id)_formattedTransactionDate;
- (id)_replacePlaceholder:(id)arg1 withValue:(id)arg2 inBodyText:(id)arg3;
- (id)bodyText;
- (id)businessIdentifier;
- (id)groupParameters;
- (id)initWithPaymentPass:(id)arg1 transaction:(id)arg2 account:(id)arg3 accountUser:(id)arg4 familyMember:(id)arg5 physicalCards:(id)arg6 intent:(long long)arg7;
- (id)initWithPaymentPass:(id)arg1 transaction:(id)arg2 account:(id)arg3 accountUser:(id)arg4 familyMember:(id)arg5 physicalCards:(id)arg6 topic:(id)arg7;
- (id)intentParameters;
- (bool)requiresAuthorization;

@end
