
@interface _INPBListShortcutsIntent : PBCodable <NSCopying, NSSecureCoding, _INPBListShortcutsIntent> {
    NSArray * _appTitles;
    struct { 
        unsigned int originDevice : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _originDevice;
}

@property (nonatomic, copy) NSArray *appTitles;
@property (nonatomic, readonly) unsigned long long appTitlesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasOriginDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int originDevice;
@property (readonly) Class superclass;

+ (Class)appTitleType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsOriginDevice:(id)arg1;
- (void)addAppTitle:(id)arg1;
- (id)appTitleAtIndex:(unsigned long long)arg1;
- (id)appTitles;
- (unsigned long long)appTitlesCount;
- (void)clearAppTitles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasOriginDevice;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)originDevice;
- (id)originDeviceAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppTitles:(id)arg1;
- (void)setHasOriginDevice:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setOriginDevice:(int)arg1;
- (void)writeTo:(id)arg1;

@end
