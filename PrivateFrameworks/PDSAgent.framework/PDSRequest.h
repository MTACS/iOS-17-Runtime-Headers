
@interface PDSRequest : NSObject {
    NSSet * _entries;
    PDSRequestInfo * _requestInfo;
}

@property (nonatomic, readonly) NSSet *entries;
@property (nonatomic, retain) PDSRequestInfo *requestInfo;

- (void).cxx_destruct;
- (id)description;
- (id)entries;
- (unsigned long long)hash;
- (id)initWithEntries:(id)arg1 requestInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)requestInfo;
- (void)setRequestInfo:(id)arg1;

@end
