
@interface SUKeybagOptions : NSObject <NSCopying, NSSecureCoding> {
    SUDescriptor * _descriptor;
    int  _keybagType;
    LAContext * _laContext;
    NSString * _passcode;
}

@property (nonatomic, retain) SUDescriptor *descriptor;
@property (nonatomic) int keybagType;
@property (nonatomic, retain) LAContext *laContext;
@property (nonatomic, retain) NSString *passcode;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)keybagType;
- (id)laContext;
- (id)passcode;
- (void)setDescriptor:(id)arg1;
- (void)setKeybagType:(int)arg1;
- (void)setLaContext:(id)arg1;
- (void)setPasscode:(id)arg1;

@end
