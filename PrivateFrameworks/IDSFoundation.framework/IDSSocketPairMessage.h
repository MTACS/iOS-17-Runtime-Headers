
@interface IDSSocketPairMessage : NSObject {
    bool  _cancelled;
    unsigned char  _command;
    <NSObject> * _context;
    NSString * _topic;
    NSData * _underlyingData;
    bool  _useDynamicServiceName;
    bool  _wasWrittenToConnection;
}

@property (nonatomic) bool cancelled;
@property (nonatomic, readonly) unsigned char command;
@property (nonatomic, retain) <NSObject> *context;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, readonly) NSData *underlyingData;
@property (nonatomic, readonly) unsigned long long underlyingDataLength;
@property (nonatomic) bool useDynamicServiceName;
@property (nonatomic) bool wasWrittenToConnection;

+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (unsigned int)headerDataSize;
+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;
+ (id)messageWithData:(id)arg1;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;

- (void).cxx_destruct;
- (id)_existingUnderlyingData;
- (id)_nonHeaderData;
- (bool)cancelled;
- (unsigned char)command;
- (id)context;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (void)setCancelled:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUseDynamicServiceName:(bool)arg1;
- (void)setWasWrittenToConnection:(bool)arg1;
- (id)topic;
- (id)underlyingData;
- (unsigned long long)underlyingDataLength;
- (bool)useDynamicServiceName;
- (bool)wasWrittenToConnection;

@end
