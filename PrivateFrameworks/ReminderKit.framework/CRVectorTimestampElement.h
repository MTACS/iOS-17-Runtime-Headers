
@interface CRVectorTimestampElement : NSObject <NSSecureCoding> {
    unsigned long long  _clock;
    unsigned long long  _subclock;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

+ (bool)supportsSecureCoding;

- (unsigned long long)clock;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)rem_compareToVectorTimestampElement:(id)arg1;
- (void)setClock:(unsigned long long)arg1;
- (void)setSubclock:(unsigned long long)arg1;
- (unsigned long long)subclock;

@end
