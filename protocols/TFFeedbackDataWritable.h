
@protocol TFFeedbackDataWritable <NSObject>

@required

- (void)overwriteWithContentsOfDataContainer:(TFFeedbackDataContainer *)arg1;
- (void)setEntryLoadingForIdentifier:(NSString *)arg1 toValue:(bool)arg2;
- (void)setGroupInclusionForIdentifier:(NSString *)arg1 toValue:(bool)arg2;
- (void)setImageCollectionForIdentifier:(NSString *)arg1 toValue:(NSArray *)arg2;
- (void)setNumberForIdentifier:(NSString *)arg1 toValue:(NSNumber *)arg2;
- (void)setStringForIdentifier:(NSString *)arg1 toValue:(NSString *)arg2;

@end
