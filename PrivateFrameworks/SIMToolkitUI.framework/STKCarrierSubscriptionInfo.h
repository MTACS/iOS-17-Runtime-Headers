
@interface STKCarrierSubscriptionInfo : NSObject {
    bool  _canShowClass0SMSOverInCallAlerts;
    bool  _showClass0SMSFromField;
    NSArray * _ussdAlwaysFilteredPatterns;
    STKUSSDFilter * _ussdFilter;
    NSArray * _ussdSometimesFilteredPatterns;
}

@property (nonatomic, readonly) bool canShowClass0SMSOverInCallAlerts;
@property (nonatomic, readonly) bool showClass0SMSFromField;
@property (nonatomic, readonly) NSArray *ussdAlwaysFilteredPatterns;
@property (nonatomic, readonly) STKUSSDFilter *ussdFilter;
@property (nonatomic, readonly) NSArray *ussdSometimesFilteredPatterns;

- (void).cxx_destruct;
- (bool)canShowClass0SMSOverInCallAlerts;
- (id)initWithShowClass0SMSFromField:(bool)arg1 canShowClass0SMSOverInCallAlerts:(bool)arg2 ussdAlwaysFilteredPatterns:(id)arg3 ussdSometimesFilteredPatterns:(id)arg4;
- (bool)showClass0SMSFromField;
- (id)ussdAlwaysFilteredPatterns;
- (id)ussdFilter;
- (id)ussdSometimesFilteredPatterns;

@end
