
@interface DocumentUnderstanding.PosTaggingResult : NSObject <NSCoding, NSCopying> {
    void len;
    void start;
    void tag;
    void text;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
