
@interface ATAudioTap : NSObject <NSSecureCoding> {
    bool  _screenSharingHost;
    ATAudioTapDescription * _tapDescription;
}

@property (getter=isScreenSharingHost, nonatomic) bool screenSharingHost;
@property (nonatomic, readonly) ATAudioTapDescription *tapDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTapDescription:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isScreenSharingHost;
- (void)setScreenSharingHost:(bool)arg1;
- (id)tapDescription;

@end
