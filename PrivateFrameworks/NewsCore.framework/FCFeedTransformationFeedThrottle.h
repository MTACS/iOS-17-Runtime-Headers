
@interface FCFeedTransformationFeedThrottle : NSObject <FCFeedTransforming> {
    id /* block */  _condition;
    unsigned long long  _limit;
}

@property (nonatomic, copy) id /* block */ condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (readonly) Class superclass;

+ (id)transformationWithDailyLimit:(unsigned long long)arg1 timeInterval:(double)arg2 condition:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)condition;
- (unsigned long long)limit;
- (void)setCondition:(id /* block */)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (id)transformFeedItems:(id)arg1;

@end
