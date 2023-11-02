
@interface PKWebServiceContext : NSObject <NSSecureCoding>

+ (id)contextWithArchive:(id)arg1;
+ (id)contextWithArchive:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void)archiveAtPath:(id)arg1;
- (bool)archiveAtPath:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
