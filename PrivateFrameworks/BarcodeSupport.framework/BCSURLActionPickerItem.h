
@interface BCSURLActionPickerItem : BCSActionPickerItem {
    LSAppLink * _appLink;
    LSApplicationRecord * _applicationRecord;
    <BCSCodePayload> * _codePayload;
    bool  _preferApplicationIcon;
    NSURL * _url;
}

@property (nonatomic, readonly) LSAppLink *appLink;
@property (nonatomic, readonly) <BCSCodePayload> *codePayload;

- (void).cxx_destruct;
- (id)actionURL;
- (id)appLink;
- (id)codePayload;
- (id)icon;
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4;
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4 preferApplicationIcon:(bool)arg5;
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4;
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4 preferApplicationIcon:(bool)arg5;
- (void)performAction;
- (void)performActionWithFBOptions:(id)arg1;
- (id)targetApplicationBundleIdentifier;
- (bool)useInlineMenu;

@end
