
@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding> {
    bool  _canAutoAccept;
    NSString * _contactIdentifier;
    bool  _didAutoAccept;
    NSSet * _items;
    NSString * _itemsDescription;
    NSDictionary * _itemsDescriptionAdvanced;
    id  _previewImage;
    NSArray * _rawFiles;
    NSString * _senderBundleID;
    NSString * _senderCompositeName;
    NSString * _senderComputerName;
    NSString * _senderEmail;
    NSString * _senderEmailHash;
    NSString * _senderFirstName;
    NSString * _senderID;
    id  _senderIcon;
    bool  _senderIsMe;
    NSString * _senderLastName;
    id  _smallPreviewImage;
    long long  _transferTypes;
    bool  _verifiableIdentity;
}

@property (nonatomic, readonly) bool canAutoAccept;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic) bool didAutoAccept;
@property (nonatomic, copy) NSSet *items;
@property (nonatomic, readonly, copy) NSString *itemsDescription;
@property (nonatomic, readonly, copy) NSDictionary *itemsDescriptionAdvanced;
@property (nonatomic, readonly) id previewImage;
@property (nonatomic, readonly, copy) NSArray *rawFiles;
@property (nonatomic, readonly, copy) NSString *senderBundleID;
@property (nonatomic, readonly, copy) NSString *senderCompositeName;
@property (nonatomic, readonly, copy) NSString *senderComputerName;
@property (nonatomic, readonly, copy) NSString *senderEmail;
@property (nonatomic, readonly, copy) NSString *senderEmailHash;
@property (nonatomic, readonly, copy) NSString *senderFirstName;
@property (nonatomic, readonly, copy) NSString *senderID;
@property (nonatomic, readonly) id senderIcon;
@property (nonatomic, readonly) bool senderIsMe;
@property (nonatomic, readonly, copy) NSString *senderLastName;
@property (nonatomic, readonly) id smallPreviewImage;
@property (nonatomic) long long transferTypes;
@property (getter=isVerifiableIdentity, nonatomic, readonly) bool verifiableIdentity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canAutoAccept;
- (id)contactIdentifier;
- (id)description;
- (bool)didAutoAccept;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInformation:(id)arg1;
- (id)initWithTransferTypes:(long long)arg1 canAutoAccept:(bool)arg2 didAutoAccept:(bool)arg3 verifiableIdentity:(bool)arg4 senderIsMe:(bool)arg5 contactIdentifier:(id)arg6 senderBundleID:(id)arg7 senderComputerName:(id)arg8 senderEmail:(id)arg9 senderEmailHash:(id)arg10 senderCompositeName:(id)arg11 senderFirstName:(id)arg12 senderLastName:(id)arg13 senderID:(id)arg14 senderIcon:(id)arg15 smallPreviewImage:(id)arg16 previewImage:(id)arg17 itemsDescription:(id)arg18 itemsDescriptionAdvanced:(id)arg19 items:(id)arg20 rawFiles:(id)arg21;
- (bool)isEqual:(id)arg1;
- (bool)isVerifiableIdentity;
- (id)items;
- (id)itemsDescription;
- (id)itemsDescriptionAdvanced;
- (id)previewImage;
- (id)rawFiles;
- (id)senderBundleID;
- (id)senderCompositeName;
- (id)senderComputerName;
- (id)senderEmail;
- (id)senderEmailHash;
- (id)senderFirstName;
- (id)senderID;
- (id)senderIcon;
- (bool)senderIsMe;
- (id)senderLastName;
- (void)setDidAutoAccept:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsDescription:(id)arg1;
- (void)setTransferTypes:(long long)arg1;
- (id)smallPreviewImage;
- (long long)transferTypes;
- (void)updateUsingCoder:(id)arg1;

@end
