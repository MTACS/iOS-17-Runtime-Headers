
@protocol ICSWriting

@required

- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id <ICSAppendable>)arg2;
- (NSSet *)parametersToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (NSSet *)propertiesToHide;
- (NSSet *)propertiesToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesToObscure;
- (bool)shouldObscureParameter:(NSString *)arg1;
- (bool)shouldObscureValue;

@end
