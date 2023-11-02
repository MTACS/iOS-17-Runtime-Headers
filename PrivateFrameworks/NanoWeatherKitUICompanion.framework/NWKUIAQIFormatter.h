
@interface NWKUIAQIFormatter : NSObject {
    NSNumberFormatter * _formatter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)autoupdatingSharedFormatter;

- (void).cxx_destruct;
- (void)_localeChanged:(id)arg1;
- (void)_reloadWithLocale:(id)arg1;
- (id)formattedIndexFromAirQualityConditions:(id)arg1;
- (id)initWithLocale:(id)arg1;

@end
