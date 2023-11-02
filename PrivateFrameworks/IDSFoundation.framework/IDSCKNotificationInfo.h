
@interface IDSCKNotificationInfo : NSObject {
    NSString * _alertLocalizationKey;
    bool  _shouldSendContentAvailable;
}

@property (nonatomic, copy) NSString *alertLocalizationKey;
@property (nonatomic) bool shouldSendContentAvailable;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)alertLocalizationKey;
- (void)setAlertLocalizationKey:(id)arg1;
- (void)setShouldSendContentAvailable:(bool)arg1;
- (bool)shouldSendContentAvailable;

@end
