
@interface _SFPBAppIconImage : PBCodable <NSSecureCoding, _SFPBAppIconImage> {
    NSString * _bundleIdentifier;
    int  _iconType;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int iconType;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)iconType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setIconType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
