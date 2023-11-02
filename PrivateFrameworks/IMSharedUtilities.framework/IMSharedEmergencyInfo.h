
@interface IMSharedEmergencyInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _conversationID;
    IMSharedPersona * _emergencyUserPersona;
    long long  _messageType;
    IMSharedPersona * _senderPersona;
}

@property (nonatomic, readonly, copy) NSString *conversationID;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) IMSharedPersona *emergencyUserPersona;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly) IMSharedPersona *senderPersona;

+ (id)infoFromDictionary:(id)arg1 isStewieTranscriptSharingMessage:(bool*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emergencyUserPersona;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStewieUserPersona:(id)arg1 stewieUserPersona:(id)arg2 conversationID:(id)arg3 messageType:(long long)arg4;
- (long long)messageType;
- (id)senderPersona;

@end
