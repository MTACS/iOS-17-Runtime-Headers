
@interface MRSendCommandHandlerEvent : NSObject <NSCopying> {
    unsigned int  _command;
    NSDictionary * _options;
}

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) NSString *commandDescription;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly, copy) _MRSendCommandMessageProtobuf *protobuf;

+ (id)eventWithCommand:(unsigned int)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (unsigned int)command;
- (id)commandDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2;
- (id)initWithProtobuf:(id)arg1;
- (id)options;
- (id)protobuf;

@end
