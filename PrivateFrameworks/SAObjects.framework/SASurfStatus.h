
@interface SASurfStatus : SADomainObject

@property (nonatomic, copy) NSString *currentState;

+ (id)surfStatus;
+ (id)surfStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentState;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCurrentState:(id)arg1;

@end
