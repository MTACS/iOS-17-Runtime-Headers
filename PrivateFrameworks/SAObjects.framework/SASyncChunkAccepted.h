
@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (nonatomic, retain) SASyncAnchor *current;

+ (id)chunkAccepted;
+ (id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2;

- (id)current;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setCurrent:(id)arg1;

@end
