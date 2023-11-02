
@interface PKDynamicProvisioningFieldsPageContent : PKDynamicProvisioningPageContent {
    PKPaymentSetupFieldsModel * _fieldModel;
}

@property (nonatomic, retain) PKPaymentSetupFieldsModel *fieldModel;

- (void).cxx_destruct;
- (id)fieldModel;
- (id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 businessChatIdentifier:(id)arg3;
- (void)setFieldModel:(id)arg1;

@end
