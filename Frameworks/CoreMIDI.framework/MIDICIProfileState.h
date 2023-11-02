
@interface MIDICIProfileState : NSObject <NSSecureCoding> {
    NSArray * disabledProfiles;
    NSArray * enabledProfiles;
    unsigned char  midiChannel;
}

@property (nonatomic, readonly) NSArray *disabledProfiles;
@property (nonatomic, readonly) NSArray *enabledProfiles;
@property (nonatomic, readonly) unsigned char midiChannel;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bytesWithChannel:(unsigned char)arg1;
- (void)dealloc;
- (id)description;
- (id)disabledProfiles;
- (id)enabledProfiles;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChannel:(unsigned char)arg1 enabledProfiles:(id)arg2 disabledProfiles:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;
- (unsigned char)midiChannel;
- (void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;

@end
