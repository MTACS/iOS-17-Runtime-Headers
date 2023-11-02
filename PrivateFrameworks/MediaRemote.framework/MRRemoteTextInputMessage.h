
@interface MRRemoteTextInputMessage : MRProtocolMessage

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long version;

- (id)data;
- (id)initWithVersion:(unsigned long long)arg1 data:(id)arg2;
- (unsigned long long)type;
- (unsigned long long)version;

@end
