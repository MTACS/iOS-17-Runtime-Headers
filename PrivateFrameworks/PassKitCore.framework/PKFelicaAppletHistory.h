
@interface PKFelicaAppletHistory : PKTransitAppletHistory {
    NSNumber * _SPID;
    bool  _balanceAllowedForCommute;
    NSSet * _existingKeys;
    PKFelicaGreenCarTicket * _greenCarTicket;
    bool  _greenCarTicketUsed;
    bool  _lowBalanceNotificationEnabled;
    PKFelicaShinkansenTicket * _shinkansenTicket;
    bool  _shinkansenTicketActive;
    NSString * _transactionID;
    long long  _transactionType;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSNumber *SPID;
@property (getter=isBalanceAllowedForCommute, nonatomic, readonly) bool balanceAllowedForCommute;
@property (nonatomic, readonly) PKFelicaGreenCarTicket *greenCarTicket;
@property (getter=isGreenCarTicketUsed, nonatomic, readonly) bool greenCarTicketUsed;
@property (getter=isInShinkansenStation, nonatomic, readonly) bool inShinkansenStation;
@property (getter=isLowBalanceNotificationEnabled, nonatomic, readonly) bool lowBalanceNotificationEnabled;
@property (nonatomic, readonly, copy) PKFelicaShinkansenTicket *shinkansenTicket;
@property (getter=isShinkansenTicketActive, nonatomic, readonly) bool shinkansenTicketActive;
@property (nonatomic, readonly, copy) NSString *transactionID;
@property (nonatomic, readonly) long long transactionType;
@property (nonatomic, readonly) long long type;

+ (long long)appletTypeForDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SPID;
- (void)_addEnrouteTransitType:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)greenCarTicket;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (bool)isBalanceAllowedForCommute;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isInStation;
- (bool)isLowBalanceNotificationEnabled;
- (bool)isShinkansenTicketActive;
- (void)sanitizeValuesWithState:(id)arg1;
- (id)shinkansenTicket;
- (id)transactionID;
- (long long)transactionType;
- (long long)type;

@end
