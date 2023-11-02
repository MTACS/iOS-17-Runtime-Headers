
@interface CKDistributedTimestampSparseVector : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _clockValues;
}

@property (nonatomic, readonly) NSMutableDictionary *clockValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addClockValuesInIndexSet:(id)arg1 forSiteIdentifier:(id)arg2;
- (id)allSiteIdentifiers;
- (id)clockValues;
- (id)clockValuesForSiteIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)intersectVector:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)minusVector:(id)arg1;
- (void)removeClockValuesInIndexSet:(id)arg1 forSiteIdentifier:(id)arg2;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)arg1;
- (void)unionVector:(id)arg1;
- (id)vectorFilteredByModifier:(id)arg1;
- (id)vectorFilteredBySiteIdentifiers:(id)arg1;

@end
