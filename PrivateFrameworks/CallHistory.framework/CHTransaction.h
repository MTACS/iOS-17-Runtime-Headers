
@interface CHTransaction : NSObject <NSSecureCoding> {
    NSData * _record;
    unsigned long long  _transactionType;
}

@property (nonatomic, readonly) NSData *record;
@property (nonatomic, readonly) unsigned long long transactionType;

+ (bool)supportsSecureCoding;
+ (id)toString:(unsigned long long)arg1;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 andRecord:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransaction:(id)arg1;
- (id)record;
- (unsigned long long)transactionType;

@end
