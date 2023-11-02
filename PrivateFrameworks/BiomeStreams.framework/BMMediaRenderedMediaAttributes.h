
@interface BMMediaRenderedMediaAttributes : BMEventBase <BMStoreData> {
    NSString * _UUID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
