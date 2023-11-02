
@interface HAP2AccessoryServerTransportRequest : HAP2LoggingObject {
    NSData * _data;
    bool  _encrypted;
    <HAP2AccessoryServerTransportRequestEndpoint> * _endpoint;
    bool  _forReading;
    unsigned long long  _identifier;
    NSString * _mimeType;
}

@property (nonatomic, readonly) NSData *data;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly) <HAP2AccessoryServerTransportRequestEndpoint> *endpoint;
@property (getter=isForReading, nonatomic, readonly) bool forReading;
@property (getter=isForWriting, nonatomic, readonly) bool forWriting;
@property (nonatomic, readonly) NSString *mimeType;

+ (id)new;

- (void).cxx_destruct;
- (id)data;
- (id)debugDescription;
- (id)description;
- (id)endpoint;
- (id)init;
- (id)initForReadingWithEndpoint:(id)arg1 data:(id)arg2 encrypted:(bool)arg3 mimeType:(id)arg4;
- (id)initForWritingWithEndpoint:(id)arg1 data:(id)arg2 encrypted:(bool)arg3 mimeType:(id)arg4;
- (bool)isEncrypted;
- (bool)isForReading;
- (bool)isForWriting;
- (id)mimeType;

@end
