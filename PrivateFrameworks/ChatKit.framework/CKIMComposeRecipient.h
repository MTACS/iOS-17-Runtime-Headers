
@interface CKIMComposeRecipient : CNComposeRecipient <CKIMComposeRecipient> {
    IMHandle * _handle;
    bool  _useAbbreviatedDisplayName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IMHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useAbbreviatedDisplayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)commentedAddress;
- (id)compositeName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRemovableFromSearchResults;
- (id)objectForDragType:(id)arg1;
- (void)releaseIMReferences;
- (void)setIdentifier:(int)arg1;
- (void)setUseAbbreviatedDisplayName:(bool)arg1;
- (id)supportedDragTypes;
- (id)uncommentedAddress;
- (id)unlocalizedLabel;
- (bool)useAbbreviatedDisplayName;

@end
