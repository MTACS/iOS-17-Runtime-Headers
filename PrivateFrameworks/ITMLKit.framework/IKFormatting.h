
@interface IKFormatting : NSObject {
    NSMutableDictionary * _dateFormatters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dateFormattersLock;
    NSNumberFormatter * _durationFormatter;
    NSNumberFormatter * _durationPaddedFormatter;
    NSMutableDictionary * _numberFormatters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _numberFormattersLock;
}

+ (id)isoDateFormatter;
+ (id)rfc1123DateFormatter;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)formatDate:(id)arg1 format:(id)arg2;
- (id)formatDuration:(id)arg1;
- (id)formatLocalizedLocaleIdentifier:(id)arg1;
- (id)formatLocalizedNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 currencyCode:(id)arg5;
- (id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4;
- (id)init;
- (id)joinComponents:(id)arg1 withASCII:(id)arg2 arabic:(id)arg3 ethiopic:(id)arg4 ideograph:(id)arg5;
- (id)joinComponentsWithLocalizedCommaAndSpace:(id)arg1;
- (id)joinComponentsWithLocalizedSemicolonAndSpace:(id)arg1;

@end
