
@interface DRSTaskingSystemMessage : NSObject <DRJSONRepresentable> {
    NSDate * _dateBroadcast;
    NSDate * _dateReceived;
    NSUUID * _messageUUID;
    NSString * _version;
}

@property (nonatomic, readonly) NSDate *dateBroadcast;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSString *messageType;
@property (nonatomic, readonly) NSUUID *messageUUID;
@property (nonatomic, readonly) NSString *version;

+ (bool)isJSONDictForClass:(id)arg1;
+ (id)messageType;

- (void).cxx_destruct;
- (bool)_isEqualToMessage:(id)arg1;
- (id)_mutableJSONDictRepresentation;
- (id)_versionFromJSONDict:(id)arg1;
- (bool)_versionIsSupported:(id)arg1;
- (id)dateBroadcast;
- (id)dateReceived;
- (id)debugDescription;
- (id)initWithJSONDict:(id)arg1;
- (id)initWithVersion:(id)arg1 messageUUID:(id)arg2 dateBroadcast:(id)arg3 dateReceived:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictRepresentation;
- (id)messageType;
- (id)messageUUID;
- (id)version;

@end
