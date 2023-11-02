
@interface SGMailIntelligenceStringHasher : NSObject {
    NSData * _rotatingSalt;
    NSData * _salt;
}

@property (nonatomic, retain) NSData *rotatingSalt;

+ (long long)hashedString:(id)arg1 salts:(id)arg2;
+ (id)rotatingSaltForDate:(id)arg1;
+ (long long)truncatedSHA256:(id)arg1 salts:(id)arg2;

- (void).cxx_destruct;
- (long long)hashedString:(id)arg1;
- (long long)hashedUserId;
- (id)init;
- (id)initWithSaltValue:(id)arg1;
- (id)rotatingSalt;
- (void)setRotatingSalt:(id)arg1;
- (long long)truncatedSHA256:(id)arg1;
- (long long)unrotatedHashedString:(id)arg1 withHashSize:(unsigned long long)arg2;
- (id)unrotatedHashedStrings:(id)arg1 withHashSize:(unsigned long long)arg2;

@end
