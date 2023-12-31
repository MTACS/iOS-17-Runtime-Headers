
@interface SAAceCorrection : SADomainObject

@property (nonatomic, copy) NSData *correctionEntryData;
@property (nonatomic, copy) NSString *debugString;

+ (id)aceCorrection;
+ (id)aceCorrectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)correctionEntryData;
- (id)debugString;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCorrectionEntryData:(id)arg1;
- (void)setDebugString:(id)arg1;

@end
