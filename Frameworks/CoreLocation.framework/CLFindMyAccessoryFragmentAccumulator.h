
@interface CLFindMyAccessoryFragmentAccumulator : NSObject {
    unsigned long long  _maxBytesPerUUID;
    NSMutableDictionary * _uuidToData;
}

@property (nonatomic) unsigned long long maxBytesPerUUID;
@property (nonatomic) NSMutableDictionary *uuidToData;

+ (id)convertDataStatusToString:(unsigned long long)arg1;

- (bool)appendData:(id)arg1 forUUID:(id)arg2;
- (bool)clearForUUID:(id)arg1;
- (id)dataForUUID:(id)arg1;
- (void)dealloc;
- (unsigned long long)getDataStatusForUUID:(id)arg1;
- (id)initWithMaxBytesPerUUID:(unsigned long long)arg1;
- (unsigned long long)maxBytesPerUUID;
- (void)setMaxBytesPerUUID:(unsigned long long)arg1;
- (void)setUuidToData:(id)arg1;
- (id)uuidToData;

@end
