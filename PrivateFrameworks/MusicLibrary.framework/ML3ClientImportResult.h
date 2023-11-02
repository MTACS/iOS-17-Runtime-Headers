
@interface ML3ClientImportResult : NSObject <NSSecureCoding> {
    NSDictionary * _resultingDatabasePersistentIDs;
    bool  _success;
}

@property (nonatomic, readonly, copy) NSDictionary *resultingDatabasePersistentIDs;
@property (nonatomic, readonly) bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(bool)arg1 resultingDatabasePersistentIDs:(id)arg2;
- (id)resultingDatabasePersistentIDs;
- (bool)success;

@end
