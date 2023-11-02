
@interface REMFetchResultToken : NSObject <NSSecureCoding> {
    NSDictionary * _persistentHistoryTokens;
}

@property (nonatomic, readonly) NSDictionary *persistentHistoryTokens;

+ (id)fetchResultTokenFromDataRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryTokens:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistentHistoryTokens;

@end
