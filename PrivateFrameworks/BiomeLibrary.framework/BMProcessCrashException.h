
@interface BMProcessCrashException : BMEventBase <BMStoreData> {
    NSString * _codes;
    NSString * _signal;
    NSString * _subtype;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *codes;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *signal;
@property (nonatomic, readonly) NSString *subtype;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)codes;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithCodes:(id)arg1 type:(id)arg2 signal:(id)arg3 subtype:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)signal;
- (id)subtype;
- (id)type;
- (void)writeTo:(id)arg1;

@end
