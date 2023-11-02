
@interface SAResultReferenceWrapper : SAAceView

@property (nonatomic, retain) SAResultObjectReference *resultReference;

+ (id)resultReferenceWrapper;
+ (id)resultReferenceWrapperWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)resultReference;
- (void)setResultReference:(id)arg1;

@end
