
@interface DKConfiguration : NSObject {
    bool  _allowNonInteractiveCloudUpload;
    bool  _postFollowUp;
    bool  _preventOpeningSafari;
    bool  _skipBackup;
    bool  _upsellTradeIn;
}

@property (nonatomic) bool allowNonInteractiveCloudUpload;
@property (nonatomic) bool postFollowUp;
@property (nonatomic) bool preventOpeningSafari;
@property (nonatomic) bool skipBackup;
@property (nonatomic) bool upsellTradeIn;

+ (id)defaultConfiguration;
+ (id)setupAssistantConfiguration;

- (bool)allowNonInteractiveCloudUpload;
- (id)init;
- (bool)postFollowUp;
- (bool)preventOpeningSafari;
- (void)setAllowNonInteractiveCloudUpload:(bool)arg1;
- (void)setPostFollowUp:(bool)arg1;
- (void)setPreventOpeningSafari:(bool)arg1;
- (void)setSkipBackup:(bool)arg1;
- (void)setUpsellTradeIn:(bool)arg1;
- (bool)skipBackup;
- (bool)upsellTradeIn;

@end
