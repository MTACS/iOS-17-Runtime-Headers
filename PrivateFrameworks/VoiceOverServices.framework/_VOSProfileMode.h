
@interface _VOSProfileMode : NSObject <NSSecureCoding> {
    NSMutableSet * _commands;
    VOSScreenreaderMode * _mode;
}

@property (nonatomic, retain) NSMutableSet *commands;
@property (nonatomic, retain) VOSScreenreaderMode *mode;

+ (id)profileModeWitMode:(id)arg1;
+ (id)profileModeWithStringValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMode:(id)arg1 commands:(id)arg2;
- (void)addCommand:(id)arg1;
- (id)commands;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mode;
- (void)setCommands:(id)arg1;
- (void)setMode:(id)arg1;

@end
