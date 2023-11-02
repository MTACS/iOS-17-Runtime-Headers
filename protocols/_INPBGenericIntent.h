
@protocol _INPBGenericIntent <NSObject>

@required

+ (Class)parametersType;

- (void)addParameters:(_INPBProperty *)arg1;
- (void)clearParameters;
- (NSString *)domain;
- (bool)hasDomain;
- (bool)hasMetadata;
- (bool)hasVerb;
- (_INPBIntentMetadata *)metadata;
- (NSArray *)parameters;
- (_INPBProperty *)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (void)setDomain:(NSString *)arg1;
- (void)setMetadata:(_INPBIntentMetadata *)arg1;
- (void)setParameters:(NSArray *)arg1;
- (void)setVerb:(NSString *)arg1;
- (NSString *)verb;

@end
