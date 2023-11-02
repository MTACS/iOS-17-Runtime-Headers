
@interface WFSystemContentWhitelist : NSObject {
    NSArray * _whitelistItems;
}

+ (id)defaultSystemWhitelist;
+ (id)newWhitelistItemFromPlistEntry:(id)arg1;

- (void)dealloc;
- (id)initWithWhitelistURL:(id)arg1;
- (bool)isURLWhitelisted:(id)arg1;

@end
