
@protocol PKFeatureDisplayableErrorProvider <NSObject>

@required

+ (NSError *)displayableErrorForError:(NSError *)arg1 featureIdentifier:(unsigned long long)arg2 genericErrorTitle:(NSString *)arg3 genericErrorMessage:(NSString *)arg4;

@end
