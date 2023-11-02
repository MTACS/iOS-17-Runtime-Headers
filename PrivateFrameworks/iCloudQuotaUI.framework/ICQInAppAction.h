
@interface ICQInAppAction : NSObject <NSSecureCoding> {
    long long  _icqActionType;
    NSString * _title;
    NSString * _type;
}

@property (nonatomic, readonly) long long icqActionType;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)icqActionType;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(id)arg2 icqActionType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (void)performAction;
- (void)performActionWithContext:(id)arg1;
- (id)title;
- (id)type;

@end
