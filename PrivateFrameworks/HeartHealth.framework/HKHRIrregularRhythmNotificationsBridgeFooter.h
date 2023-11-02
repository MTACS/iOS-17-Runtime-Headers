
@interface HKHRIrregularRhythmNotificationsBridgeFooter : NSObject <NSCopying> {
    NSString * _linkText;
    NSString * _linkURL;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *linkText;
@property (nonatomic, readonly, copy) NSString *linkURL;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)footerWhenAFibHistoryIsEnabled;
+ (id)footerWhenRemotelyDisabled;
+ (id)footerWhenSeedHasExpired;
+ (id)footerWhenUnavailableInOnboardedCountry;
+ (id)standardFooter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithText:(id)arg1 linkText:(id)arg2 linkURL:(id)arg3;
- (id)linkText;
- (id)linkURL;
- (id)text;

@end
