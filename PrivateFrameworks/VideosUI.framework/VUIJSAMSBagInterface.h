
@interface VUIJSAMSBagInterface : VUIJSObject <VUIJSAMSBagDelegate>

@property (nonatomic, readonly) NSDictionary *VUIAMSBagValueTypes;

+ (id)convertNSErrorIntoDict:(id)arg1;
+ (id)generateResponseDictionary:(id)arg1 withError:(id)arg2;

- (id)URLForKey:(id)arg1;
- (void)URLForKeyWithCompletion:(id)arg1 :(id)arg2;
- (id)VUIAMSBagValueTypes;
- (id)arrayForKey:(id)arg1;
- (void)arrayForKeyWithCompletion:(id)arg1 :(id)arg2;
- (id)boolForKey:(id)arg1;
- (void)boolForKeyWithCompletion:(id)arg1 :(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (void)dictionaryForKeyWithCompletion:(id)arg1 :(id)arg2;
- (id)doubleForKey:(id)arg1;
- (void)doubleForKeyWithCompletion:(id)arg1 :(id)arg2;
- (id)integerForKey:(id)arg1;
- (void)integerForKeyWithCompletion:(id)arg1 :(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)stringForKeyWithCompletion:(id)arg1 :(id)arg2;

@end
