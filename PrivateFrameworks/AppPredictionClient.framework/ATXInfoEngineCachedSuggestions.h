
@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper> {
    NSArray * _entries;
}

@property (nonatomic, retain) NSArray *entries;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)entries;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)proto;
- (void)setEntries:(id)arg1;

@end
