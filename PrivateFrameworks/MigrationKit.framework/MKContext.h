
@interface MKContext : NSObject {
    MKImportContext * _accessibilitySetting;
    MKImportContext * _account;
    MKImportContext * _album;
    MKImportContext * _application;
    MKImportContext * _bookmark;
    MKImportContext * _calendar;
    MKImportContext * _contact;
    MKImportContext * _container;
    MKImportContext * _displaySetting;
    MKImportContext * _file;
    MKImportContext * _image;
    MKImportContext * _message;
    MKImportContext * _placeholder;
    MKImportContext * _sim;
    MKImportContext * _video;
}

@property (nonatomic, retain) MKImportContext *accessibilitySetting;
@property (nonatomic, retain) MKImportContext *account;
@property (nonatomic, retain) MKImportContext *album;
@property (nonatomic, retain) MKImportContext *application;
@property (nonatomic, retain) MKImportContext *bookmark;
@property (nonatomic, retain) MKImportContext *calendar;
@property (nonatomic, retain) MKImportContext *contact;
@property (nonatomic, retain) MKImportContext *container;
@property (nonatomic, retain) MKImportContext *displaySetting;
@property (nonatomic, retain) MKImportContext *file;
@property (nonatomic, retain) MKImportContext *image;
@property (nonatomic, retain) MKImportContext *message;
@property (nonatomic, retain) MKImportContext *placeholder;
@property (nonatomic, retain) MKImportContext *sim;
@property (nonatomic, retain) MKImportContext *video;

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
- (id)file;
- (id)image;
- (id)init;
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
- (void)setMessage:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setSim:(id)arg1;
- (void)setVideo:(id)arg1;
- (id)sim;
- (id)video;

@end
