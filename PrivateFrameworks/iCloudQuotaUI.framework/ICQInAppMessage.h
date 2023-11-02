
@interface ICQInAppMessage : NSObject <NSSecureCoding> {
    NSArray * _actions;
    unsigned long long  _contentType;
    ICQInAppAction * _dismissAction;
    NSString * _identifier;
    NSString * _reason;
    NSString * _sfSymbolName;
    NSString * _subTitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) ICQInAppAction *dismissAction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSString *sfSymbolName;
@property (nonatomic, readonly, copy) NSString *subTitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)actionFromOffer:(id)arg1;
+ (id)airplaneMode;
+ (id)fallbackAction;
+ (id)fallbackOffer;
+ (id)quotaAlmostFull;
+ (id)quotaAlmostFullForOffer:(id)arg1;
+ (id)quotaAlmostFullLongForOffer:(id)arg1;
+ (id)quotaFull;
+ (id)quotaFullForOffer:(id)arg1;
+ (id)quotaFullLongForOffer:(id)arg1;
+ (id)serverUnreachable;
+ (bool)supportsSecureCoding;
+ (id)universalLinkFromOffer:(id)arg1;

- (void).cxx_destruct;
- (id)actions;
- (unsigned long long)contentType;
- (id)description;
- (id)dismissAction;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 title:(id)arg4 subTitle:(id)arg5 sfSymbolName:(id)arg6 actions:(id)arg7;
- (id)initWithContentType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 title:(id)arg4 subTitle:(id)arg5 sfSymbolName:(id)arg6 actions:(id)arg7 dismissAction:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)reason;
- (void)setIdentifier:(id)arg1;
- (id)sfSymbolName;
- (id)subTitle;
- (id)title;

@end
