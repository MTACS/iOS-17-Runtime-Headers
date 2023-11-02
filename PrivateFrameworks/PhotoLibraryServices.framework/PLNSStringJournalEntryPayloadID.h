
@interface PLNSStringJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID> {
    NSString * _payloadID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadIDString;
- (id)payloadUUIDData;

@end
