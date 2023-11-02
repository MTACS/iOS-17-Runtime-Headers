
@interface HSLoginResponse : HSResponse {
    unsigned int  sessionID;
}

@property (nonatomic) unsigned int sessionID;

- (unsigned int)sessionID;
- (void)setSessionID:(unsigned int)arg1;

@end
