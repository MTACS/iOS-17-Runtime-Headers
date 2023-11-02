
@interface MontrealModelJSONParser : NSObject {
    NSDictionary * _infoDictionary;
    NSString * _jsonDir;
    MontrealNNModelNetwork * _network;
}

@property (readonly) NSDictionary *infoDictionary;
@property (readonly) NSString *jsonDir;
@property (readonly) MontrealNNModelNetwork *network;

- (void).cxx_destruct;
- (id)createJSONFromFile:(id)arg1;
- (id)infoDictionary;
- (id)initWithURL:(id)arg1;
- (id)jsonDir;
- (id)network;

@end
