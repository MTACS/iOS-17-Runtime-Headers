
@interface WBSPrivateBrowsingExplanationItem : NSObject {
    UIImage * _image;
    bool  _limitedToPrivateBrowsing;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, readonly) UIImage *image;
@property (getter=isLimitedToPrivateBrowsing, nonatomic, readonly) bool limitedToPrivateBrowsing;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)itemsForConfiguration:(id)arg1;
+ (id)lockedPrivateBrowsingPromptForConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 limitedToPrivateBrowsing:(bool)arg4;
- (id)_initWithSymbolName:(id)arg1 title:(id)arg2 message:(id)arg3 limitedToPrivateBrowsing:(bool)arg4;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (bool)isLimitedToPrivateBrowsing;
- (id)message;
- (id)title;

@end
