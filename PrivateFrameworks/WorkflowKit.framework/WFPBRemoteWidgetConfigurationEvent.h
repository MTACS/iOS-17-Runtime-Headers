
@interface WFPBRemoteWidgetConfigurationEvent : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _key;
    NSString * _sizeClass;
    NSString * _widgetIdentifier;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSizeClass;
@property (nonatomic, readonly) bool hasWidgetIdentifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *sizeClass;
@property (nonatomic, retain) NSString *widgetIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasKey;
- (bool)hasSizeClass;
- (bool)hasWidgetIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSizeClass:(id)arg1;
- (void)setWidgetIdentifier:(id)arg1;
- (id)sizeClass;
- (id)widgetIdentifier;
- (void)writeTo:(id)arg1;

@end
