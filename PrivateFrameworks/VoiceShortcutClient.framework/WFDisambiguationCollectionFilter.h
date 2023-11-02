
@interface WFDisambiguationCollectionFilter : NSObject <NSCopying, NSSecureCoding> {
    LNAppShortcutDynamicOptionsProviderReference * _namedQueryReference;
    NSString * _systemEntityCollectionIdentifier;
}

@property (nonatomic, retain) LNAppShortcutDynamicOptionsProviderReference *namedQueryReference;
@property (nonatomic, retain) NSString *systemEntityCollectionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamedQueryReference:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithSystemEntityCollectionIdentifier:(id)arg1;
- (id)initWithSystemEntityCollectionIdentifier:(id)arg1 namedQueryReference:(id)arg2;
- (id)namedQueryReference;
- (id)serializableRepresentation;
- (void)setNamedQueryReference:(id)arg1;
- (void)setSystemEntityCollectionIdentifier:(id)arg1;
- (id)systemEntityCollectionIdentifier;

@end
