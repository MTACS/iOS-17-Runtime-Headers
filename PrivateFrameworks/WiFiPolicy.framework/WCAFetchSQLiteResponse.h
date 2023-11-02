
@interface WCAFetchSQLiteResponse : WCAFetchResponse {
    NSArray * _records;
}

@property (nonatomic, copy) NSArray *records;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)records;
- (void)setRecords:(id)arg1;

@end
