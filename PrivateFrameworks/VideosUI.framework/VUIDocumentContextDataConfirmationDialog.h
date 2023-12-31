
@interface VUIDocumentContextDataConfirmationDialog : VUIDocumentContextData {
    NSString * _confirmationDialogType;
    NSString * _name;
}

@property (nonatomic, copy) NSString *confirmationDialogType;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)confirmationDialogType;
- (id)jsonData;
- (id)name;
- (void)setConfirmationDialogType:(id)arg1;
- (void)setName:(id)arg1;

@end
