
@interface ISHashError : NSObject <NSCopying> {
    NSString * _actualHashString;
    NSString * _expectedHashString;
    long long  _rangeEnd;
    long long  _rangeStart;
}

@property (nonatomic, copy) NSString *actualHashString;
@property (nonatomic, copy) NSString *expectedHashString;
@property (nonatomic, readonly) NSString *hashFailureHeaderString;
@property (nonatomic) long long rangeEnd;
@property (nonatomic) long long rangeStart;

- (id)actualHashString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)expectedHashString;
- (id)hashFailureHeaderString;
- (long long)rangeEnd;
- (long long)rangeStart;
- (void)setActualHashString:(id)arg1;
- (void)setExpectedHashString:(id)arg1;
- (void)setRangeEnd:(long long)arg1;
- (void)setRangeStart:(long long)arg1;

@end
