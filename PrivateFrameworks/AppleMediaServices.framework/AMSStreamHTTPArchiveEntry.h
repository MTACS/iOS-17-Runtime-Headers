
@interface AMSStreamHTTPArchiveEntry : NSObject <NSSecureCoding> {
    NSArray * _entries;
    NSString * _urlString;
}

@property (nonatomic, retain) NSArray *entries;
@property (nonatomic, retain) NSString *urlString;

+ (id)_createEntriesForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (id)initWithHTTPArchiveTaskInfo:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;

@end
