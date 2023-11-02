
@interface ATXContextHeuristicsEvent : NSObject <BMStoreData> {
    NSString * _contextName;
    NSString * _contextType;
    bool  _isStart;
}

@property (nonatomic, readonly, copy) NSString *contextName;
@property (nonatomic, readonly, copy) NSString *contextType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isStart;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)contextName;
- (id)contextType;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)initWithContextName:(id)arg1 contextType:(id)arg2 isStart:(bool)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isStart;
- (id)json;
- (id)jsonDictionary;
- (id)proto;
- (id)serialize;
- (void)setIsStart:(bool)arg1;

@end
