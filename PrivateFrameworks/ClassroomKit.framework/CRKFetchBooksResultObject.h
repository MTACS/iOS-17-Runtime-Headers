
@interface CRKFetchBooksResultObject : CATTaskResultObject {
    NSArray * _books;
}

@property (nonatomic, copy) NSArray *books;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)books;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBooks:(id)arg1;

@end
