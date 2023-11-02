
@interface MPMultiSortDescriptor : NSSortDescriptor {
    NSDictionary * _relatedProperties;
}

@property (nonatomic, copy) NSDictionary *relatedProperties;

+ (id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)relatedProperties;
- (void)setRelatedProperties:(id)arg1;

@end
