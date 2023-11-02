
@interface NCNotificationListLegibilityLabelCache : NSObject {
    NSMutableDictionary * _sectionHeaderViewLegibilityLabelDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2;
- (id)_stringDescriptorForFont:(id)arg1;
- (void)clearAll;
- (id)init;
- (id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3;
- (id)sectionHeaderViewLegibilityLabelDictionary;
- (void)setSectionHeaderViewLegibilityLabelDictionary:(id)arg1;

@end
