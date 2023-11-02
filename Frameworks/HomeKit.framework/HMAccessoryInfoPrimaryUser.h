
@interface HMAccessoryInfoPrimaryUser : NSObject {
    unsigned long long  _selectionType;
    NSString * _uuidString;
}

@property (readonly) unsigned long long selectionType;
@property (readonly, copy) NSString *uuidString;

- (void).cxx_destruct;
- (int)_primaryUserInfoEventSelectionType:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (id)initWithUUIDString:(id)arg1 selectionType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)protoData;
- (id)protoPayload;
- (unsigned long long)selectionType;
- (id)uuidString;

@end
