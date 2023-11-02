
@interface PREditorContentStylePalette : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding> {
    unsigned long long  _context;
    bool  _defaultPalette;
    NSString * _localizedName;
    NSString * _role;
    NSArray * _styles;
}

@property (readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultPalette, readonly) bool defaultPalette;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *role;
@property (readonly) NSArray *styles;
@property (readonly) Class superclass;

+ (id)additionalColorsForExtendedPalette;
+ (id)defaultPaletteForContext:(unsigned long long)arg1 role:(id)arg2;
+ (id)standardPaletteColors;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)context;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentStyles:(id)arg1 context:(unsigned long long)arg2 role:(id)arg3 localizedName:(id)arg4 defaultPalette:(bool)arg5;
- (id)initWithContentStyles:(id)arg1 localizedName:(id)arg2;
- (bool)isDefaultPalette;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)role;
- (id)styles;

@end
