
@interface DMFFetchManagedBooksResultObject : CATTaskResultObject {
    NSArray * _books;
}

@property (nonatomic, readonly, copy) NSArray *books;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)books;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBooks:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
