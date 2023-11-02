
@interface SAPhoneCallSearchResult : SADomainObject

@property (nonatomic, copy) NSDate *callTime;
@property (nonatomic, retain) SAPersonAttribute *contact;
@property (nonatomic, copy) NSNumber *isNew;

+ (id)callSearchResult;
+ (id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)callTime;
- (id)contact;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isNew;
- (void)setCallTime:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setIsNew:(id)arg1;

@end
