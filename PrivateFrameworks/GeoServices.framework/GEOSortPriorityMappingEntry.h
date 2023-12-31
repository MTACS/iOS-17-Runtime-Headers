
@interface GEOSortPriorityMappingEntry : NSObject {
    long long  _priority;
    long long  _resultSubtype;
    long long  _resultType;
}

@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) long long resultSubtype;
@property (nonatomic, readonly) long long resultType;

- (id)init;
- (id)initWithPriority:(long long)arg1 resultType:(long long)arg2 resultSubtype:(long long)arg3;
- (long long)priority;
- (long long)resultSubtype;
- (long long)resultType;

@end
