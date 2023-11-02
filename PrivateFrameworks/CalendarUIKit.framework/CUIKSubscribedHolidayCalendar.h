
@interface CUIKSubscribedHolidayCalendar : NSObject {
    NSURL * _URL;
    NSString * _cachedDescriptionInLocaleLanguage;
    NSString * _cachedLocalizedDescription;
    NSString * _countryCode;
    NSString * _languageCode;
    NSLocale * _locale;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _localizedDescriptionCacheLock;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSLocale *locale;

- (void).cxx_destruct;
- (id)URL;
- (id)countryCode;
- (id)descriptionInLocaleLanguage;
- (id)initWithLocale:(id)arg1 languageCode:(id)arg2 URL:(id)arg3;
- (id)languageCode;
- (id)locale;
- (id)localizedDescription;
- (id)localizedTitle;
- (void)setCountryCode:(id)arg1;

@end
