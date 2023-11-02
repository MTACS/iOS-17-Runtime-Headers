
@interface DEResult : NSObject {
    NSNumber * _elapsedTimeMs;
    NSNumber * _elapsedTimeThreadMs;
    NSString * _error;
    NSString * _json;
    NSDictionary * _meta;
    NSArray * _response;
    NSString * _status;
    NSArray * _visualRefs;
}

@property (nonatomic, retain) NSNumber *elapsedTimeMs;
@property (nonatomic, retain) NSNumber *elapsedTimeThreadMs;
@property (nonatomic, retain) NSString *error;
@property (nonatomic, retain) NSString *json;
@property (nonatomic, retain) NSDictionary *meta;
@property (nonatomic, retain) NSArray *response;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSArray *visualRefs;

- (void).cxx_destruct;
- (id)elapsedTimeMs;
- (id)elapsedTimeThreadMs;
- (id)error;
- (id)initFromJson:(id)arg1;
- (id)json;
- (id)meta;
- (id)response;
- (void)setElapsedTimeMs:(id)arg1;
- (void)setElapsedTimeThreadMs:(id)arg1;
- (void)setError:(id)arg1;
- (void)setJson:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setVisualRefs:(id)arg1;
- (id)status;
- (id)visualRefs;

@end
