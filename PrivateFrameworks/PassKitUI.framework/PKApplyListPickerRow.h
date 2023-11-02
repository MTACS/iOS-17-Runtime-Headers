
@interface PKApplyListPickerRow : NSObject <PKApplyCollectionViewRow> {
    PKPaymentSetupFieldPickerItem * _pickerItem;
    bool  _selected;
    NSString * _submissionValue;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, readonly) PKPaymentSetupFieldPickerItem *pickerItem;
@property (nonatomic) bool selected;
@property (nonatomic, readonly) NSString *submissionValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)identifier;
- (id)initWithPickerItem:(id)arg1;
- (id)pickerItem;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (id)submissionValue;
- (id)title;

@end
