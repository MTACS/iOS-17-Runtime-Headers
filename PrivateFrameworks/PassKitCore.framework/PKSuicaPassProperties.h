
@interface PKSuicaPassProperties : PKTransitPassProperties {
    bool  _balanceAllowedForCommute;
    bool  _greenCarTicketUsed;
    bool  _lowBalanceGateNotificationEnabled;
}

@property (getter=isBalanceAllowedForCommute, nonatomic, readonly) bool balanceAllowedForCommute;
@property (getter=isBlacklisted, nonatomic, readonly) bool blacklisted;
@property (getter=isGreenCarTicketUsed, nonatomic, readonly) bool greenCarTicketUsed;
@property (getter=isInShinkansenStation, nonatomic, readonly) bool inShinkansenStation;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, readonly) bool isBlocked;
@property (getter=isLowBalanceGateNotificationEnabled, nonatomic, readonly) bool lowBalanceGateNotificationEnabled;
@property (nonatomic, readonly, copy) NSDecimalNumber *transitBalance;
@property (nonatomic, readonly, copy) NSString *transitBalanceCurrencyCode;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)arg1;

- (id)_initWithProperties:(id)arg1;
- (unsigned long long)hash;
- (bool)isBalanceAllowedForCommute;
- (bool)isEqual:(id)arg1;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isInStation;
- (bool)isLowBalanceGateNotificationEnabled;

// Image: /usr/lib/swift/libswiftPassKit.dylib

- (bool)isBlocked;

@end
