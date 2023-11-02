
@interface BMMessagesRead : BMEventBase <BMStoreData> {
    bool  _hasMarkedUnread;
    NSString * _idsHandle;
    bool  _markedUnread;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMarkedUnread;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *idsHandle;
@property (nonatomic, readonly) bool markedUnread;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasMarkedUnread;
- (id)idsHandle;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdsHandle:(id)arg1 markedUnread:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (bool)markedUnread;
- (id)serialize;
- (void)setHasMarkedUnread:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
