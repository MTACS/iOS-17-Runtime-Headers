
@interface _SFPBRFImageSource : PBCodable <NSSecureCoding, _SFPBRFImageSource> {
    _SFPBRFAppIconImage * _app_icon;
    _SFPBRFAvatarImage * _avatar;
    _SFPBRFBadgedImage * _badged_image;
    _SFPBRFDefaultBrowserAppIconImage * _default_browser_app_icon;
    _SFPBRFMonogramImage * _monogram;
    _SFPBRFSymbolImage * _symbol;
    _SFPBRFUrlImage * _url;
    unsigned long long  _whichValue;
}

@property (nonatomic, retain) _SFPBRFAppIconImage *app_icon;
@property (nonatomic, retain) _SFPBRFAvatarImage *avatar;
@property (nonatomic, retain) _SFPBRFBadgedImage *badged_image;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _SFPBRFDefaultBrowserAppIconImage *default_browser_app_icon;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBRFMonogramImage *monogram;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFSymbolImage *symbol;
@property (nonatomic, retain) _SFPBRFUrlImage *url;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)app_icon;
- (id)avatar;
- (id)badged_image;
- (id)default_browser_app_icon;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)monogram;
- (bool)readFrom:(id)arg1;
- (void)setApp_icon:(id)arg1;
- (void)setAvatar:(id)arg1;
- (void)setBadged_image:(id)arg1;
- (void)setDefault_browser_app_icon:(id)arg1;
- (void)setMonogram:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)symbol;
- (id)url;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
