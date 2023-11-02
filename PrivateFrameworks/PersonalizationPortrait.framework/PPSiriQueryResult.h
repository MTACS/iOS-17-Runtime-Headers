
@interface PPSiriQueryResult : NSObject <NSCopying> {
    NSNumber * _confidence;
    NSString * _domain;
    NSString * _qid;
}

@property (nonatomic, readonly) NSNumber *confidence;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *qid;

+ (id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;

- (void).cxx_destruct;
- (id)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domain;
- (unsigned long long)hash;
- (id)init;
- (id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSiriQueryResult:(id)arg1;
- (id)qid;

@end
