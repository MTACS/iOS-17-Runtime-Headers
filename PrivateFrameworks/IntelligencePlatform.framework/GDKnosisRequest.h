
@interface GDKnosisRequest : NSObject <NSSecureCoding> {
    bool  _enableDebug;
    NSArray * _intentArgs;
    NSString * _kgq;
    NSNumber * _limit;
    NSNumber * _offset;
    NSString * _query;
}

@property (nonatomic, readonly) bool enableDebug;
@property (nonatomic, readonly, copy) NSArray *intentArgs;
@property (nonatomic, readonly, copy) NSString *kgq;
@property (nonatomic, readonly, copy) NSNumber *limit;
@property (nonatomic, copy) NSNumber *offset;
@property (nonatomic, readonly, copy) NSString *query;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)enableDebug;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntents:(id)arg1 query:(id)arg2 limit:(id)arg3 offset:(id)arg4;
- (id)initWithIntents:(id)arg1 query:(id)arg2 limit:(id)arg3 offset:(id)arg4 enableDebug:(bool)arg5;
- (id)initWithKGQ:(id)arg1 query:(id)arg2 limit:(id)arg3 offset:(id)arg4;
- (id)initWithKGQ:(id)arg1 query:(id)arg2 limit:(id)arg3 offset:(id)arg4 enableDebug:(bool)arg5;
- (id)intentArgs;
- (id)kgq;
- (id)limit;
- (id)offset;
- (id)query;
- (void)setOffset:(id)arg1;

@end
