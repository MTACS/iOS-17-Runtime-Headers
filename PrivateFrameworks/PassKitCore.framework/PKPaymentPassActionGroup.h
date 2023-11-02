
@interface PKPaymentPassActionGroup : NSObject <NSCopying, NSSecureCoding, PKIdentifiable> {
    NSString * _actionGroupDescription;
    NSArray * _actionIdentifiers;
    NSArray * _actions;
    NSDictionary * _appletData;
    bool  _hasRemoteContent;
    NSString * _identifier;
    bool  _remoteContentRequiresAppletData;
    NSString * _title;
}

@property (nonatomic, copy) NSString *actionGroupDescription;
@property (nonatomic, copy) NSArray *actionIdentifiers;
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSDictionary *appletData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRemoteContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool remoteContentRequiresAppletData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionGroupDescription;
- (id)actionIdentifiers;
- (id)actions;
- (id)appletData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRemoteContent;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)remoteContentRequiresAppletData;
- (void)setActionGroupDescription:(id)arg1;
- (void)setActionIdentifiers:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAppletData:(id)arg1;
- (void)setHasRemoteContent:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRemoteContentRequiresAppletData:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
