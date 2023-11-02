
@interface MLRTaskAttachments : NSObject <NSSecureCoding> {
    NSArray * _attachmentURLs;
    unsigned long long  _count;
}

@property (nonatomic, readonly, copy) NSArray *attachmentURLs;
@property (nonatomic, readonly) unsigned long long count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentURLs;
- (id)attachmentURLsForBasename:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithDESRecipe:(id)arg1;
- (id)initWithURLs:(id)arg1;

@end
