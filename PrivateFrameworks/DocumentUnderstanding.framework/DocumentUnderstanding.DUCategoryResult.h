
@interface DocumentUnderstanding.DUCategoryResult : NSObject <NSCoding, NSCopying> {
    void categoryConfidence;
    void categoryIdentifier;
}

@property (nonatomic) double categoryConfidence;
@property (nonatomic, copy) NSString *categoryIdentifier;

- (void).cxx_destruct;
- (double)categoryConfidence;
- (id)categoryIdentifier;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCategoryConfidence:(double)arg1;
- (void)setCategoryIdentifier:(id)arg1;

@end
