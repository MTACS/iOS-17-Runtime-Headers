
@interface FCAggregateContentArchive : FCContentArchive {
    NSArray * _childArchives;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manifest;
- (id)unarchiveIntoContentContext:(id)arg1;

@end
