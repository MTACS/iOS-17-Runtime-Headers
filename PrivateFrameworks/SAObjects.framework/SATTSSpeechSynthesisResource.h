
@interface SATTSSpeechSynthesisResource : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *resourceVersion;
@property (readonly) Class superclass;

+ (id)speechSynthesisResource;
+ (id)speechSynthesisResourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)languageCode;
- (id)resourceVersion;
- (void)setLanguageCode:(id)arg1;
- (void)setResourceVersion:(id)arg1;

@end
