
@interface SBHSetDiff : NSObject <NSCopying> {
    NSSet * _additions;
    NSSet * _deletions;
    NSSet * _fromSet;
    NSSet * _toSet;
    NSSet * _updates;
}

@property (nonatomic, readonly) NSSet *additions;
@property (nonatomic, readonly) NSSet *deletions;
@property (nonatomic, readonly) NSSet *fromSet;
@property (nonatomic, readonly) NSSet *toSet;
@property (nonatomic, readonly) NSSet *updates;

+ (id)diffFromSet:(id)arg1 toSet:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5;
- (id)additions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletions;
- (id)description;
- (id)fromSet;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)toSet;
- (id)updates;

@end
