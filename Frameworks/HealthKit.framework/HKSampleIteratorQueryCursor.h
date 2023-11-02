
@interface HKSampleIteratorQueryCursor : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _distinctByKeyPaths;
    HKQueryAnchor * _followingAnchor;
    NSArray * _queryDescriptors;
    NSArray * _sortDescriptors;
    NSData * _state;
    HKQueryAnchor * _upToAndIncludingAnchor;
}

@property (nonatomic, readonly, copy) NSArray *distinctByKeyPaths;
@property (nonatomic, readonly, copy) HKQueryAnchor *followingAnchor;
@property (nonatomic, readonly, copy) NSArray *queryDescriptors;
@property (nonatomic, readonly, copy) NSArray *sortDescriptors;
@property (nonatomic, readonly, copy) NSData *state;
@property (nonatomic, readonly, copy) HKQueryAnchor *upToAndIncludingAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)distinctByKeyPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)followingAnchor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5;
- (id)initWithQueryDescriptors:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 state:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)queryDescriptors;
- (id)sortDescriptors;
- (id)state;
- (id)upToAndIncludingAnchor;

@end
