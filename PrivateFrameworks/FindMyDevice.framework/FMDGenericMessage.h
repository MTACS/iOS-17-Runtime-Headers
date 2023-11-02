
@interface FMDGenericMessage : NSObject <NSSecureCoding> {
    int  _soundDuration;
    NSString * _soundName;
    bool  _vibrate;
}

@property (nonatomic) int soundDuration;
@property (nonatomic, retain) NSString *soundName;
@property (nonatomic) bool vibrate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSoundDuration:(int)arg1;
- (void)setSoundName:(id)arg1;
- (void)setVibrate:(bool)arg1;
- (int)soundDuration;
- (id)soundName;
- (bool)vibrate;

@end
