
@protocol INSetTaskAttributeIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INTask *)modifiedTask;
- (void)setModifiedTask:(INTask *)arg1;
- (void)setWarnings:(unsigned long long)arg1;
- (unsigned long long)warnings;

@end
