
@interface STStorageTip : NSObject {
    NSString * _identifier;
    PSSpecifier * _infoSpecifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _specLock;
    PSSpecifier * _specifier;
    NSObject<STStorageTipUIDelegate> * _uiDelegate;
}

@property (retain) UIImage *icon;
@property (retain) NSString *identifier;
@property (readonly) PSSpecifier *infoSpecifier;
@property (retain) NSString *infoText;
@property (retain) NSString *representedApp;
@property long long size;
@property (retain) PSSpecifier *specifier;
@property (retain) NSString *title;
@property NSObject<STStorageTipUIDelegate> *uiDelegate;

- (void).cxx_destruct;
- (void)_reload:(id)arg1;
- (id)icon;
- (id)identifier;
- (id)infoSpecifier;
- (id)infoText;
- (id)init;
- (id)propertyForKey:(id)arg1;
- (void)reload;
- (id)representedApp;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setRepresentedApp:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUiDelegate:(id)arg1;
- (long long)size;
- (id)specifier;
- (id)title;
- (id)uiDelegate;

@end
