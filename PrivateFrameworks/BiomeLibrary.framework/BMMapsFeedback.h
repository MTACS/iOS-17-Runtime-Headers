
@interface BMMapsFeedback : BMEventBase <BMStoreData> {
    NSString * _contactID;
    NSString * _handle;
    NSString * _locationEndID;
    NSString * _locationStartID;
}

@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *locationEndID;
@property (nonatomic, readonly) NSString *locationStartID;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contactID;
- (unsigned int)dataVersion;
- (id)description;
- (id)handle;
- (id)initByReadFrom:(id)arg1;
- (id)initWithHandle:(id)arg1 contactID:(id)arg2 locationStartID:(id)arg3 locationEndID:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)locationEndID;
- (id)locationStartID;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
