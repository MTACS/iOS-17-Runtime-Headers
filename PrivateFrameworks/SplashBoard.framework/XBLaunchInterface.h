
@interface XBLaunchInterface : NSObject <BSXPCCoding, NSSecureCoding> {
    XBLaunchInterfaceConfiguration * _configuration;
    bool  _default;
    NSString * _identifier;
    NSString * _name;
    unsigned long long  _type;
    NSArray * _urlSchemes;
}

@property (getter=_isDefault, nonatomic) bool _default;
@property (nonatomic, readonly) XBLaunchInterfaceConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isConfiguration;
@property (nonatomic, readonly) bool isStoryboard;
@property (nonatomic, readonly) bool isXIB;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSArray *urlSchemes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isDefault;
- (id)configuration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2 urlSchemes:(id)arg3 isDefault:(bool)arg4;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(bool)arg5;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isConfiguration;
- (bool)isStoryboard;
- (bool)isXIB;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrlSchemes:(id)arg1;
- (void)set_default:(bool)arg1;
- (unsigned long long)type;
- (id)urlSchemes;

@end
