
@interface NSBatchUpdateRequestEncodingToken : NSObject <NSSecureCoding> {
    NSDictionary * _columnsToUpdate;
    NSString * _entityName;
    bool  _includeSubEntities;
    long long  _nullValueCount;
    NSPredicate * _predicate;
    long long  _resultType;
    bool  _secure;
}

@property (nonatomic, readonly, retain) NSDictionary *columnsToUpdate;
@property (nonatomic, readonly, retain) NSString *entityName;
@property (nonatomic, readonly) bool includeSubEntities;
@property (nonatomic, readonly) long long nullValueCount;
@property (nonatomic, readonly, retain) NSPredicate *predicate;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) bool secure;

+ (bool)supportsSecureCoding;

- (id)columnsToUpdate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (bool)includeSubEntities;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)nullValueCount;
- (id)predicate;
- (long long)resultType;
- (bool)secure;

@end
