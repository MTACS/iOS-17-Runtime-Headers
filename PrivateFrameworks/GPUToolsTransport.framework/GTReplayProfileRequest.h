
@interface GTReplayProfileRequest : GTReplayRequest <NSSecureCoding> {
    unsigned int  _priority;
    NSData * _profileData;
    int  _profileDataVersion;
    id /* block */  _streamHandler;
}

@property (nonatomic) unsigned int priority;
@property (nonatomic, retain) NSData *profileData;
@property (nonatomic) int profileDataVersion;
@property (nonatomic, copy) id /* block */ streamHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)priority;
- (id)profileData;
- (int)profileDataVersion;
- (void)setPriority:(unsigned int)arg1;
- (void)setProfileData:(id)arg1;
- (void)setProfileDataVersion:(int)arg1;
- (void)setStreamHandler:(id /* block */)arg1;
- (id /* block */)streamHandler;

@end
