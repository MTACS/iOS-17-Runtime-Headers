
@interface MRSendCommandMessage : MRProtocolMessage {
    NSDictionary * _options;
    NSDate * _serializationDate;
}

@property (nonatomic, readonly) unsigned int appOptions;
@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) NSDate *serializationDate;

- (void).cxx_destruct;
- (unsigned int)appOptions;
- (unsigned int)command;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3;
- (id)options;
- (id)playerPath;
- (id)serializationDate;
- (unsigned long long)type;

@end
