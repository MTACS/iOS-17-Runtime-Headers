
@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNSocialProfile *profile;

+ (id)displayLabelForSocialProfile:(id)arg1 forPropertyKey:(id)arg2;
+ (id)displayStringForSocialProfile:(id)arg1;
+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (id)editingStringValue;
- (bool)isEquivalentToItem:(id)arg1;
- (id)profile;
- (id)valueForDisplayString:(id)arg1;

@end
