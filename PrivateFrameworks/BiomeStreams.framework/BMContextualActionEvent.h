
@interface BMContextualActionEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _actionName;
    NSString * _appName;
    NSArray * _contents;
    NSString * _identifier;
    NSArray * _parameters;
}

@property (nonatomic, readonly, copy) NSString *actionName;
@property (nonatomic, readonly, copy) NSString *appName;
@property (nonatomic, readonly) NSArray *contents;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSArray *parameters;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)actionName;
- (id)appName;
- (id)contents;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 appName:(id)arg2 actionName:(id)arg3 contents:(id)arg4 parameters:(id)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)parameters;
- (id)proto;
- (id)serialize;

@end
