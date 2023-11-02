
@interface CACSpokenCommandCustom : CACSpokenCommand {
    NSDictionary * _customProperties;
    NSString * _primaryCommand;
}

@property (readonly) NSDictionary *customProperties;
@property (retain) NSString *primaryCommand;

- (void).cxx_destruct;
- (void)_setCustomProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customProperties;
- (id)description;
- (void)handleSpokenCommand:(id)arg1;
- (id)initWithCommandIdentifier:(id)arg1;
- (bool)isCustomCommand;
- (id)primaryCommand;
- (void)setPrimaryCommand:(id)arg1;

@end
