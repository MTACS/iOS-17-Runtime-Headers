
@interface _CLKTimeFormatterCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSMutableDictionary * _timeAndDesignatorFormatters;
    NSMutableDictionary * _timeAndDesignatorFormattersSuppressingWhitespace;
    NSMutableDictionary * _timeOnlyFormatters;
}

+ (id)sharedInstance;
+ (id)timeZoneName:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidateFormatters;
- (void)dealloc;
- (id)init;
- (id)timeAndDesignatorFormatterForTimeZone:(id)arg1 suppressWhitespace:(bool)arg2 forcesLatinNumbers:(bool)arg3;
- (id)timeOnlyFormatterForTimeZone:(id)arg1 hasSeconds:(bool)arg2 forcesLatinNumbers:(bool)arg3;

@end
