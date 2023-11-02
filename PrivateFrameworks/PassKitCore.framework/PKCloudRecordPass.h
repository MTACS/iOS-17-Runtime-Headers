
@interface PKCloudRecordPass : PKCloudRecordObject {
    PKPass * _pass;
}

@property (nonatomic, retain) PKPass *pass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (void)applyCloudRecordObject:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (id)pass;
- (void)setPass:(id)arg1;

@end
