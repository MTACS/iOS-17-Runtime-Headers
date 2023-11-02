
@interface SiriSharedUISashItem : NSObject {
    NSString * _applicationBundleIdentifier;
    UIColor * _backgroundColor;
    bool  _canPunchout;
    NSArray * _commands;
    <SiriSharedUISashItemDelegate> * _delegate;
    bool  _hidden;
    UIImage * _image;
    bool  _requestsExtraPadding;
    bool  _siriImage;
    UIColor * _textColor;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) bool canPunchout;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic) <SiriSharedUISashItemDelegate> *delegate;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool requestsExtraPadding;
@property (getter=isSiriImage, nonatomic, readonly) bool siriImage;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *title;

+ (id)languageCode;
+ (void)setLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (void)_configureIconForAppProxy:(id)arg1;
- (id)applicationBundleIdentifier;
- (id)backgroundColor;
- (bool)canPunchout;
- (id)commands;
- (id)delegate;
- (id)image;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isSiriImage;
- (bool)requestsExtraPadding;
- (void)setBackgroundColor:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setRequestsExtraPadding:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textColor;
- (id)title;

@end
