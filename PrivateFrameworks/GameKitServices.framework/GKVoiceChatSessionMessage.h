
@interface GKVoiceChatSessionMessage : GKOOBMessage {
    unsigned int  _conferenceID;
    NSData * _data;
    unsigned int  _subtype;
}

- (bool)_checkSize:(unsigned long long)arg1;
- (bool)_checkType:(unsigned short)arg1;
- (unsigned int)conferenceID;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (id)payload;
- (unsigned int)subtype;

@end
