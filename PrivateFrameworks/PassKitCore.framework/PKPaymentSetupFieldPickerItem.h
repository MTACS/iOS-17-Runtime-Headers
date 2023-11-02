
@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying> {
    DIAttributePickerItem * _attributePickerItem;
    NSString * _localizedDisplayName;
    PKPaymentSetupFieldPicker * _nextLevelPicker;
    NSString * _submissionConfirmationDescription;
    NSString * _submissionConfirmationTitle;
    NSString * _submissionValue;
}

@property (nonatomic, retain) DIAttributePickerItem *attributePickerItem;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) PKPaymentSetupFieldPicker *nextLevelPicker;
@property (nonatomic, readonly, copy) NSString *submissionConfirmationDescription;
@property (nonatomic, readonly, copy) NSString *submissionConfirmationTitle;
@property (nonatomic, readonly, copy) NSString *submissionValue;

+ (id)_itemWithDIAttributePickerItem:(id)arg1;

- (void).cxx_destruct;
- (id)attributePickerItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (id)nextLevelPicker;
- (void)setAttributePickerItem:(id)arg1;
- (id)submissionConfirmationDescription;
- (id)submissionConfirmationTitle;
- (id)submissionValue;

@end
