
@protocol _INPBControlHomeIntentResponse <NSObject>

@required

+ (Class)entityResponsesType;

- (void)addEntityResponses:(_INPBHomeEntityResponse *)arg1;
- (void)clearEntityResponses;
- (NSArray *)entityResponses;
- (_INPBHomeEntityResponse *)entityResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityResponsesCount;
- (void)setEntityResponses:(NSArray *)arg1;

@end
