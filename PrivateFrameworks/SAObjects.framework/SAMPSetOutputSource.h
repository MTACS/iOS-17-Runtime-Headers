
@interface SAMPSetOutputSource : SADomainCommand

@property (nonatomic, copy) NSURL *outputSourceId;

+ (id)setOutputSource;
+ (id)setOutputSourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)outputSourceId;
- (bool)requiresResponse;
- (void)setOutputSourceId:(id)arg1;

@end
