
@interface _VOSProfileKeyChord : NSObject <NSSecureCoding> {
    _VOSProfileCommand * _command;
    AXSSKeyChord * _keyChord;
}

@property (nonatomic) _VOSProfileCommand *command;
@property (nonatomic, retain) AXSSKeyChord *keyChord;

+ (id)profileKeyChordWithKeyChord:(id)arg1;
+ (id)profileKeyChordWithStringValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKeyChord:(id)arg1;
- (id)command;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyChord;
- (void)setCommand:(id)arg1;
- (void)setKeyChord:(id)arg1;

@end
