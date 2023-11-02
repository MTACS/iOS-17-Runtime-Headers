
@interface ICRadioResponse : NSObject {
    NSDate * _expirationDate;
    ICURLAggregatedPerformanceMetrics * _performanceMetrics;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSDictionary *contentDictionary;
@property (nonatomic, readonly, copy) ICStoreDialogResponse *dialog;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, retain) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSError *serverError;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)contentDictionary;
- (id)dialog;
- (id)expirationDate;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;
- (id)initWithURLResponse:(id)arg1;
- (id)performanceMetrics;
- (id)responseDictionary;
- (id)serverError;
- (void)setPerformanceMetrics:(id)arg1;
- (long long)version;

@end
