
@interface PKTransitPassProperties : PKStoredValuePassProperties

@property (getter=isBlacklisted, nonatomic, readonly) bool blacklisted;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) PKFelicaPassProperties *felicaProperties;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, readonly) bool isBlocked;
@property (nonatomic, readonly, copy) NSDecimalNumber *transitBalance;
@property (nonatomic, readonly, copy) NSString *transitBalanceCurrencyCode;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)felicaProperties;
- (id)transitBalance;
- (id)transitBalanceCurrencyCode;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (bool)npkHasTransitBalance;

// Image: /usr/lib/swift/libswiftPassKit.dylib

- (bool)isBlocked;

@end
