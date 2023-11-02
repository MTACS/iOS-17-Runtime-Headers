
@interface WLKLocale : NSObject {
    NSString * _displayName;
    NSLocale * _locale;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSLocale *locale;

- (void).cxx_destruct;
- (id)displayName;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)locale;

@end
