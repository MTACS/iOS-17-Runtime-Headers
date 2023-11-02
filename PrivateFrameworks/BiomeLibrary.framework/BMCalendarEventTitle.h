
@interface BMCalendarEventTitle : BMEventBase <BMStoreData> {
    NSData * _interaction;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *interaction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTitle:(id)arg1 interaction:(id)arg2;
- (id)interaction;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)title;
- (void)writeTo:(id)arg1;

@end
