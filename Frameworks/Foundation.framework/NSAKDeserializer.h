
@interface NSAKDeserializer : NSObject {
    id  ds;
}

- (void)dealloc;
- (id)deserializeData:(id)arg1;
- (id)deserializeList:(id)arg1;
- (id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)deserializeNewData;
- (id)deserializeNewKeyString;
- (id)deserializeNewList;
- (id)deserializeNewObject;
- (id)deserializeNewPList;
- (id)deserializeNewString;
- (id)deserializePList:(id)arg1;
- (id)deserializePListKeyIn:(id)arg1;
- (id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3;
- (id)deserializeString:(id)arg1;
- (id)deserializerStream;
- (id)initForDeserializerStream:(id)arg1;

@end
