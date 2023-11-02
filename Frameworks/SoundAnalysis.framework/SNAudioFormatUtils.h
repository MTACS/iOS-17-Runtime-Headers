
@interface SNAudioFormatUtils : NSObject

+ (void)assertAudioStreamAnalyzerSupportsFormat:(id)arg1;
+ (bool)checkFormatIsLinearPCM:(id)arg1;
+ (bool)checkFormatIsValid:(id)arg1;
+ (bool)validateAudioStreamAnalyzerSupportsFormat:(id)arg1 error:(id*)arg2;
+ (bool)validateFormatIsLinearPCM:(id)arg1 error:(id*)arg2;
+ (bool)validateFormatIsValid:(id)arg1 error:(id*)arg2;

- (id)init;

@end
