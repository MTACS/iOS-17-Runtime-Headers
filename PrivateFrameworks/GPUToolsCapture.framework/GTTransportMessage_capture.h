
@interface GTTransportMessage_capture : NSObject <NSCopying> {
    NSDictionary * _attributes;
    id  _decodedPayload;
    unsigned int  _decodedPayloadType;
    NSData * _encodedAttributes;
    int  _kind;
    NSData * _payload;
    unsigned int  _replySerial;
    unsigned int  _serial;
    GTTransport_capture * _transport;
    unsigned int  _transportSize;
}

@property (nonatomic, readonly, retain) NSDictionary *attributes;
@property (nonatomic, retain) NSData *encodedAttributes;
@property (nonatomic, readonly) int kind;
@property (nonatomic, readonly, retain) NSData *payload;
@property (nonatomic, readonly) unsigned int replySerial;
@property (nonatomic, readonly) unsigned int serial;
@property (nonatomic, readonly, retain) GTTransport_capture *transport;
@property (nonatomic, readonly) unsigned int transportSize;

+ (id)messageWithKind:(int)arg1;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(bool)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 boolPayload:(bool)arg2;
+ (id)messageWithKind:(int)arg1 objectPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 payload:(id)arg2;
+ (id)messageWithKind:(int)arg1 plistPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 stringPayload:(id)arg2;

- (void)_setSerial:(unsigned int)arg1 replySerial:(unsigned int)arg2 transport:(id)arg3;
- (void)_setTransportSize:(unsigned int)arg1;
- (id)attributeForKey:(id)arg1;
- (id)attributes;
- (bool)boolForKey:(id)arg1;
- (bool)boolPayload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleForKey:(id)arg1;
- (id)encodedAttributes;
- (bool)hasBeenSent;
- (id)init;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(bool)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
- (int)kind;
- (id)objectPayload;
- (id)payload;
- (id)plistPayload;
- (unsigned int)replySerial;
- (unsigned int)serial;
- (void)setEncodedAttributes:(id)arg1;
- (id)stringPayload;
- (id)transport;
- (unsigned int)transportSize;
- (unsigned int)uint32ForKey:(id)arg1;
- (unsigned long long)uint64ForKey:(id)arg1;

@end
