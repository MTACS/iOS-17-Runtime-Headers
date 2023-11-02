
@interface _REMFetchExecutor : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadataFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
- (id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id*)arg3;

@end
