
@interface DocumentUnderstanding.DUDebugInfo : NSObject <NSCoding, NSCopying> {
    void debugString;
}

@property (nonatomic, copy) NSString *debugString;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)debugString;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDebugString:(id)arg1;

@end
