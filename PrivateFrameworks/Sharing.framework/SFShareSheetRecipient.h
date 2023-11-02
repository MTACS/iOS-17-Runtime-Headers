
@interface SFShareSheetRecipient : NSObject <NSSecureCoding> {
    NSString * _contactIdentifier;
    NSString * _displayName;
    NSSet * _formattedHandles;
    NSString * _realName;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSSet *formattedHandles;
@property (nonatomic, readonly) NSString *realName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedHandles;
- (id)init;
- (id)initWithAirDropNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1;
- (id)initWithRealName:(id)arg1 displayName:(id)arg2 formattedHandles:(id)arg3 contactIdentifier:(id)arg4;
- (id)realName;

@end
