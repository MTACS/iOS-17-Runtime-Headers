
@protocol TFFeedbackDataDisplayable

@required

- (unsigned long long)displayableDataType;
- (void)setDisplayedDataGroupInclusionBool:(bool)arg1;
- (void)setDisplayedDataImageCollection:(NSArray *)arg1;
- (void)setDisplayedDataNumber:(NSNumber *)arg1;
- (void)setDisplayedDataString:(NSString *)arg1;

@end
