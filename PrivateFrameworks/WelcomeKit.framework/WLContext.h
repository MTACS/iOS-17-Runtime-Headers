
@interface WLContext : NSObject <NSSecureCoding> {
    WLImportContext * _accessibilitySetting;
    WLImportContext * _account;
    WLImportContext * _album;
    WLImportContext * _application;
    WLImportContext * _bookmark;
    WLImportContext * _calendar;
    WLImportContext * _contact;
    WLImportContext * _container;
    WLImportContext * _displaySetting;
    WLImportContext * _file;
    WLImportContext * _image;
    bool  _isEnabled;
    WLImportContext * _message;
    WLImportContext * _placeholder;
    WLImportContext * _sim;
    WLImportContext * _video;
}

@property (nonatomic, retain) WLImportContext *accessibilitySetting;
@property (nonatomic, retain) WLImportContext *account;
@property (nonatomic, retain) WLImportContext *album;
@property (nonatomic, retain) WLImportContext *application;
@property (nonatomic, retain) WLImportContext *bookmark;
@property (nonatomic, retain) WLImportContext *calendar;
@property (nonatomic, retain) WLImportContext *contact;
@property (nonatomic, retain) WLImportContext *container;
@property (nonatomic, retain) WLImportContext *displaySetting;
@property (nonatomic, retain) WLImportContext *file;
@property (nonatomic, retain) WLImportContext *image;
@property (nonatomic) bool isEnabled;
@property (nonatomic, retain) WLImportContext *message;
@property (nonatomic, retain) WLImportContext *placeholder;
@property (nonatomic, retain) WLImportContext *sim;
@property (nonatomic, retain) WLImportContext *video;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilitySetting;
- (id)account;
- (id)album;
- (id)application;
- (id)bookmark;
- (id)calendar;
- (id)contact;
- (id)container;
- (id)displaySetting;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)message;
- (id)placeholder;
- (void)setAccessibilitySetting:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setBookmark:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDisplaySetting:(id)arg1;
- (void)setFile:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setSim:(id)arg1;
- (void)setVideo:(id)arg1;
- (id)sim;
- (id)video;

@end
