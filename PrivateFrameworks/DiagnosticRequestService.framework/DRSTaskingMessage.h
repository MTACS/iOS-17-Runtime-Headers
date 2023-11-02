
@interface DRSTaskingMessage : DRSTaskingSystemMessage {
    NSDictionary * _teamTaskings;
}

@property (nonatomic, readonly) NSDictionary *teamTaskings;

+ (id)messageType;

- (void).cxx_destruct;
- (bool)_isEqualToMessage:(id)arg1;
- (bool)_versionIsSupported:(id)arg1;
- (id)initWithJSONDict:(id)arg1;
- (id)initWithVersion:(id)arg1 messageUUID:(id)arg2 dateBroadcast:(id)arg3 dateReceived:(id)arg4 teamTaskings:(id)arg5;
- (id)jsonDictRepresentation;
- (id)teamTaskings;

@end
