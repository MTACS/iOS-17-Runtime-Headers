
@interface MUPunchoutViewModel : NSObject {
    UIMenu * _menu;
    NSString * _punchoutText;
    NSString * _symbolName;
}

@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic, retain) NSString *punchoutText;
@property (nonatomic, retain) NSString *symbolName;

+ (id)viewModelForAddPhotos;
+ (id)viewModelForFullScreenGallery;
+ (id)viewModelForVendorName:(id)arg1;

- (void).cxx_destruct;
- (id)menu;
- (id)punchoutText;
- (void)setMenu:(id)arg1;
- (void)setPunchoutText:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
