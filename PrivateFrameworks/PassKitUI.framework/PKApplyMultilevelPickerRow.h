
@interface PKApplyMultilevelPickerRow : NSObject <PKApplyCollectionViewRow> {
    PKPaymentSetupFieldPicker * _picker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, readonly) PKPaymentSetupFieldPicker *picker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)identifier;
- (id)initWithPicker:(id)arg1;
- (id)picker;

@end
