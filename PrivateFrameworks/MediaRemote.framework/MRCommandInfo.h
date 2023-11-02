
@interface MRCommandInfo : NSObject {
    unsigned int  _command;
    bool  _enabled;
    NSDictionary * _options;
}

@property (nonatomic) unsigned int command;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, readonly, copy) NSData *propertyListData;
@property (nonatomic, readonly) _MRCommandInfoProtobuf *protobuf;

+ (id)commandInfosFromData:(id)arg1;
+ (id)dataFromCommandInfos:(id)arg1;
+ (bool)isCommandActuallySupportedEvenWhenDisabled:(unsigned int)arg1;

- (void).cxx_destruct;
- (unsigned int)command;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1;
- (id)initWithPropertyListData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)propertyListData;
- (id)protobuf;
- (void)setCommand:(unsigned int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOptions:(id)arg1;

@end
