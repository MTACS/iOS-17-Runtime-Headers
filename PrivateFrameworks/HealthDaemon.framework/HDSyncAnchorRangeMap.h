
@interface HDSyncAnchorRangeMap : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _anchorRangesByEntityIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)anchorRangeCount;
- (id)codableSyncAnchorRangeMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(id /* block */)arg1;
- (bool)getAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; }*)arg1 forSyncEntityIdentifier:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg1 forSyncEntityIdentifier:(id)arg2;

@end
