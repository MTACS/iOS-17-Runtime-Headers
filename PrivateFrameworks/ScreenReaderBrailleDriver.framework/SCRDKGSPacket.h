
@interface SCRDKGSPacket : NSObject {
    unsigned char  _command;
    NSData * _data;
    unsigned char  _subCommand;
}

@property (nonatomic) unsigned char command;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned char subCommand;

- (void).cxx_destruct;
- (unsigned char)command;
- (id)data;
- (void)setCommand:(unsigned char)arg1;
- (void)setData:(id)arg1;
- (void)setSubCommand:(unsigned char)arg1;
- (unsigned char)subCommand;

@end
