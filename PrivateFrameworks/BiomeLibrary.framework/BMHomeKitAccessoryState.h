
@interface BMHomeKitAccessoryState : BMEventBase <BMStoreData> {
    NSData * _dataValue;
    bool  _hasNumValue;
    NSString * _mediaPropertyType;
    double  _numValue;
    NSString * _stringValue;
    int  _valueType;
}

@property (nonatomic, readonly) NSData *dataValue;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasNumValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mediaPropertyType;
@property (nonatomic, readonly) double numValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int valueType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)dataValue;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasNumValue;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMediaPropertyType:(id)arg1 valueType:(int)arg2 dataValue:(id)arg3 stringValue:(id)arg4 numValue:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)mediaPropertyType;
- (double)numValue;
- (id)serialize;
- (void)setHasNumValue:(bool)arg1;
- (id)stringValue;
- (int)valueType;
- (void)writeTo:(id)arg1;

@end
