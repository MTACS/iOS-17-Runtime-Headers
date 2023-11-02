
@interface SABackgroundUpdateRequest : SAStartRequest

@property (nonatomic, retain) <SAAceSerializable> *attachment;

+ (id)backgroundUpdateRequest;
+ (id)backgroundUpdateRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachment;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAttachment:(id)arg1;

@end
