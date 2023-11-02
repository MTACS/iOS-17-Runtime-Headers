
@interface BMSiriAnnotatedEntityAnnotation : BMEventBase <BMStoreData> {
    bool  _hasValue;
    int  _name;
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long value;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasValue;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(int)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)name;
- (id)serialize;
- (void)setHasValue:(bool)arg1;
- (unsigned long long)value;
- (void)writeTo:(id)arg1;

@end
