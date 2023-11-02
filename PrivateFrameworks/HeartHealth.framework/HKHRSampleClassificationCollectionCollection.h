
@interface HKHRSampleClassificationCollectionCollection : NSObject <NSSecureCoding> {
    NSArray * _classificationCollections;
}

@property (nonatomic, retain) NSArray *classificationCollections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classificationCollections;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassificationCollections:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClassificationCollections:(id)arg1;

@end
