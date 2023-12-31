
@protocol FxParameterCreationAPI_v4 <FxParameterCreationAPI_v3>

@required

- (bool)addFontMenuWithName:(NSString *)arg1 parmId:(unsigned int)arg2 fontName:(NSString *)arg3 parmFlags:(unsigned int)arg4;
- (bool)addHelpButtonWithName:(NSString *)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (bool)addPushButtonWithName:(NSString *)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;

@end
