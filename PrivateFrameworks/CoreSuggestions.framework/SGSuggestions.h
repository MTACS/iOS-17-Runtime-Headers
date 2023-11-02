
@interface SGSuggestions : NSObject <NSSecureCoding> {
    NSArray * _contacts;
    NSArray * _events;
    NSArray * _reminders;
    NSArray * _walletOrders;
    NSArray * _walletPasses;
}

@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) NSArray *reminders;
@property (nonatomic, readonly) NSArray *walletOrders;
@property (nonatomic, readonly) NSArray *walletPasses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)initWithCoder:(id)arg1;
- (id)initWithContacts:(id)arg1 events:(id)arg2 reminders:(id)arg3 walletOrders:(id)arg4 walletPasses:(id)arg5;
- (id)reminders;
- (id)walletOrders;
- (id)walletPasses;

@end
