
@interface _DPJSONSegment : NSObject {
    NSString * _key;
    NSDictionary * _parameterDictionary;
    NSArray * _records;
    NSString * _serverAlgorithmString;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) NSDictionary *parameterDictionary;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly, copy) NSString *serverAlgorithmString;

- (void).cxx_destruct;
- (id)fixDoubleValuesInDictionary:(id)arg1;
- (id)init;
- (id)initWithKey:(id)arg1 serverAlgorithmString:(id)arg2 parameterDictionary:(id)arg3 records:(id)arg4;
- (id)jsonSegmentString;
- (id)key;
- (id)parameterDictionary;
- (id)parameterStringFrom:(id)arg1;
- (id)records;
- (id)serverAlgorithmString;

@end
