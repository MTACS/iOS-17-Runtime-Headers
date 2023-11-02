
@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding> {
    NSString * __tokenBinaryIdentifierAsString;
    MIPMultiverseIdentifier * _multiverseIdentifier;
}

@property (nonatomic, readonly) NSString *_tokenBinaryIdentifierAsString;
@property (nonatomic, readonly) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MIPMultiverseIdentifier *multiverseIdentifier;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) MPMediaItem *representativeItem;

+ (bool)canFilterByProperty:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_tokenBinaryIdentifierAsString;
- (id)cachedValueForProperty:(id)arg1 isCached:(bool*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)genericModelObjectWithRequestedProperties:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (void)invalidateCachedProperties;
- (bool)isEqual:(id)arg1;
- (id)mediaLibrary;
- (id)multiverseIdentifier;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)persistentID;
- (id)representativeItem;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
