
@interface RFImageSource : NSObject <NSCopying, NSSecureCoding, RFImageSource> {
    RFAppIconImage * _app_icon;
    RFAvatarImage * _avatar;
    RFBadgedImage * _badged_image;
    RFDefaultBrowserAppIconImage * _default_browser_app_icon;
    struct { 
        unsigned int url : 1; 
        unsigned int symbol : 1; 
        unsigned int app_icon : 1; 
        unsigned int avatar : 1; 
        unsigned int monogram : 1; 
        unsigned int badged_image : 1; 
        unsigned int default_browser_app_icon : 1; 
    }  _has;
    RFMonogramImage * _monogram;
    RFSymbolImage * _symbol;
    RFUrlImage * _url;
}

@property (nonatomic, retain) RFAppIconImage *app_icon;
@property (nonatomic, retain) RFAvatarImage *avatar;
@property (nonatomic, retain) RFBadgedImage *badged_image;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) RFDefaultBrowserAppIconImage *default_browser_app_icon;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RFMonogramImage *monogram;
@property (readonly) Class superclass;
@property (nonatomic, retain) RFSymbolImage *symbol;
@property (nonatomic, retain) RFUrlImage *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)app_icon;
- (id)avatar;
- (id)badged_image;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)default_browser_app_icon;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasApp_icon;
- (bool)hasAvatar;
- (bool)hasBadged_image;
- (bool)hasDefault_browser_app_icon;
- (bool)hasMonogram;
- (bool)hasSymbol;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)monogram;
- (void)setApp_icon:(id)arg1;
- (void)setAvatar:(id)arg1;
- (void)setBadged_image:(id)arg1;
- (void)setDefault_browser_app_icon:(id)arg1;
- (void)setMonogram:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)symbol;
- (id)url;

@end
