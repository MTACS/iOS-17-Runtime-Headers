
@interface _PGInterruption : NSObject <NSCopying> {
    NSString * _attribution;
    unsigned long long  _bs_hash;
    long long  _reason;
}

@property (nonatomic, readonly, copy) NSString *attribution;
@property (nonatomic, readonly) long long reason;

- (void).cxx_destruct;
- (id)attribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithReason:(long long)arg1 attribution:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)reason;

@end
