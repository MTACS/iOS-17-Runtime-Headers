
@interface PKCloudRecordAccount : PKCloudRecordObject {
    PKAccount * _account;
}

@property (nonatomic, retain) PKAccount *account;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (id)account;
- (void)applyCloudRecordObject:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setAccount:(id)arg1;

@end
