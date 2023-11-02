
@interface GEORequestResponsePersistedEvent : NSObject {
    PBCodable * _decodedMessage;
    NSString * _errorMessage;
    GEORRRequestResponseEvent * _event;
    NSURL * _eventFileURL;
    int  _eventType;
    NSString * _identifier;
    int  _messageType;
    NSURL * _serviceURL;
    unsigned long long  _size;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) PBCodable *decodedMessage;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSURL *eventFileURL;
@property (nonatomic, readonly) int eventType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int messageType;
@property (nonatomic, readonly) NSData *rawMessage;
@property (nonatomic, readonly) GEORRRequestResponseEvent *rrEvent;
@property (nonatomic, readonly) NSURL *serviceURL;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id /* block */)enumeratorBlockHelper:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)decodedMessage;
- (id)errorMessage;
- (id)eventFileURL;
- (int)eventType;
- (id)identifier;
- (int)messageType;
- (id)rawMessage;
- (id)rrEvent;
- (id)serviceURL;
- (unsigned long long)size;
- (id)timestamp;

@end
