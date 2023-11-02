
@interface CSAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _playbackDeviceTypeList;
    NSString * _playbackRoute;
    CSAudioRecordDeviceInfo * _recordDeviceInfo;
}

@property (nonatomic, readonly, copy) NSArray *playbackDeviceTypeList;
@property (nonatomic, readonly, copy) NSString *playbackRoute;
@property (nonatomic, readonly, copy) CSAudioRecordDeviceInfo *recordDeviceInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordDeviceInfo:(id)arg1 playbackRoute:(id)arg2 playbackDeviceTypeList:(id)arg3;
- (id)initWithXPCObject:(id)arg1;
- (id)playbackDeviceTypeList;
- (id)playbackRoute;
- (id)recordDeviceInfo;
- (id)xpcObject;

@end
