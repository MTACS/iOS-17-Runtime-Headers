
@interface SGDomainWhitelistChecker : NSObject

+ (void)_setTrieFromPath:(id)arg1 guardedData:(id)arg2;
+ (bool)isStructuredEventCandidateForEmailDomain:(id)arg1;
+ (bool)isStructuredEventCandidateForURL:(id)arg1 title:(id)arg2;
+ (id)lock;
+ (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 27; })payloadForDomain:(id)arg1;
+ (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 27; })payloadWithStartChar:(const char *)arg1 andSize:(unsigned long long)arg2;
+ (void)setTrieFromPath:(id)arg1;

@end
