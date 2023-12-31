
@interface DMFInstallManagedBookResultObject : CATTaskResultObject {
    DMFBook * _book;
}

@property (nonatomic, readonly, copy) DMFBook *book;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)book;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBook:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
