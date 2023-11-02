
@interface AVAudioSessionChannelDescription : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) unsigned int channelLabel;
@property (nonatomic, readonly) NSString *channelName;
@property (nonatomic, readonly) unsigned long long channelNumber;
@property (nonatomic, readonly) NSString *owningPortUID;

+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned int)arg3;
+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;

- (unsigned int)channelLabel;
- (id)channelName;
- (unsigned long long)channelNumber;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;
- (id)owningPortUID;
- (struct ChannelDescriptionImpl { id x1; id x2; unsigned int x3; unsigned int x4; }*)privateGetImplementation;

@end
