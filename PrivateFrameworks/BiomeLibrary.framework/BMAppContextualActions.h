
@interface BMAppContextualActions : BMEventBase <BMStoreData> {
    NSString * _actionName;
    NSString * _appName;
    NSArray * _content;
    NSString * _identifier;
    NSArray * _parameter;
}

@property (nonatomic, readonly) NSString *actionName;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSArray *content;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *parameter;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_contentJSONArray;
- (id)_parameterJSONArray;
- (id)actionName;
- (id)appName;
- (id)content;
- (unsigned int)dataVersion;
- (id)description;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 appName:(id)arg2 actionName:(id)arg3 content:(id)arg4 parameter:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)parameter;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
