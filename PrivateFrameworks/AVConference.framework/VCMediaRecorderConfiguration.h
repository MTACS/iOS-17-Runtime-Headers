
@interface VCMediaRecorderConfiguration : VCObject {
    int  _clientPid;
    unsigned int  _mediaAvailability;
}

@property (nonatomic) int clientPid;
@property (nonatomic) unsigned int mediaAvailability;

- (int)clientPid;
- (unsigned int)mediaAvailability;
- (void)setClientPid:(int)arg1;
- (void)setMediaAvailability:(unsigned int)arg1;

@end
