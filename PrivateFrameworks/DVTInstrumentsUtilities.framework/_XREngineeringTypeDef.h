
@interface _XREngineeringTypeDef : XRXMLElementParser <XREngineeringTypeDef> {
    unsigned long long  _attributes;
    bool  _deprecated;
    XREngineeringTypeEncodingConvention * _encodingConvention;
    NSString * _enumString;
    bool  _experimental;
    bool  _handledEncodingElement;
    unsigned char  _impl;
    NSString * _mnemonic;
    NSString * _title;
    NSString * _usage;
}

@property (nonatomic) unsigned long long attributes;
@property (nonatomic) bool deprecated;
@property (nonatomic, retain) XREngineeringTypeEncodingConvention *encodingConvention;
@property (nonatomic, retain) NSString *enumString;
@property (nonatomic) bool experimental;
@property (nonatomic) unsigned char impl;
@property (nonatomic, retain) NSString *mnemonic;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *usage;

+ (id)_elementNameToClassMap;
+ (id)_elementNameToKVCMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)addAttribute:(unsigned long long)arg1;
- (void)addString:(id)arg1 elementType:(id)arg2;
- (unsigned long long)attributes;
- (long long)conventionalBitWidth;
- (bool)deprecated;
- (void)didHandleEncodingElement;
- (id)encodingConvention;
- (id)enumString;
- (id)errorStringHeader;
- (bool)experimental;
- (unsigned char)impl;
- (id)mnemonic;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDeprecated:(bool)arg1;
- (void)setEncodingConvention:(id)arg1;
- (void)setEnumString:(id)arg1;
- (void)setExperimental:(bool)arg1;
- (void)setImpl:(unsigned char)arg1;
- (void)setMnemonic:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsage:(id)arg1;
- (id)title;
- (id)usage;

@end
