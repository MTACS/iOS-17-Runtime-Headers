
@interface PKPaymentPreferenceListItem : NSObject <NSCopying> {
    PKPaymentPreference * _sectionPreference;
}

@property (nonatomic, readonly) PKPaymentPreference *sectionPreference;

- (void).cxx_destruct;
- (id)_image;
- (id)_internalConfiguration;
- (id)_secondaryText;
- (id)_text;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAccessories;
- (id)initWithSectionPreference:(id)arg1;
- (bool)isAddItem;
- (bool)isOptionItem;
- (id)sectionPreference;
- (bool)supportsInlineEditing;
- (bool)supportsSwipeActionType:(int)arg1;

@end
