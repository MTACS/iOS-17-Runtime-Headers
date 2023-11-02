
@interface ANAnnouncementDataItem : NSObject <ANMessage, NSSecureCoding> {
    NSData * _data;
    unsigned long long  _flags;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *info;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

+ (id)strictSecureDecodeFromData:(id)arg1;
+ (id)strictSecureDecodeFromData:(id)arg1 classList:(id)arg2 decodingFailurePolicy:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForDataType:(unsigned long long)arg1;
- (id)copy;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)info;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (void)setData:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

- (bool)processAudioWithEffects:(unsigned long long)arg1 error:(id*)arg2;

@end
