
@interface CNExtensionCommand : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _commandType;
    CNContactsProviderSession * _session;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *commandType;
@property (nonatomic, retain) CNContactsProviderSession *session;

+ (id)disable;
+ (id)disableBundleIdentifier:(id)arg1;
+ (id)enable;
+ (id)enableBundleIdentifier:(id)arg1;
+ (id)fetchContainerIdentifier;
+ (id)fetchEnabled;
+ (id)fetchExtensionItems;
+ (id)fetchExtensionItemsCount;
+ (id)new;
+ (bool)supportsSecureCoding;
+ (id)synchronizeUsingSession:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)commandType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandType:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)session;
- (void)setBundleIdentifier:(id)arg1;
- (void)setSession:(id)arg1;

@end
