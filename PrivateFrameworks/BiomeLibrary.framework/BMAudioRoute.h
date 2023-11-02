
@interface BMAudioRoute : BMEventBase <BMStoreData> {
    bool  _external;
    bool  _hasExternal;
    NSString * _identifier;
    NSString * _portName;
    NSString * _portType;
    int  _routeChangeReason;
    int  _type;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool external;
@property (nonatomic) bool hasExternal;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *portName;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) int routeChangeReason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)external;
- (bool)hasExternal;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithExternal:(id)arg1 identifier:(id)arg2 portType:(id)arg3 portName:(id)arg4 routeChangeReason:(int)arg5 type:(int)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)portName;
- (id)portType;
- (int)routeChangeReason;
- (id)serialize;
- (void)setHasExternal:(bool)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
