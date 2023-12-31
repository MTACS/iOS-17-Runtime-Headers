
@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
    int  _maxSize;
}

@property (nonatomic) int maxSize;

- (id)description;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;
- (bool)isEqual:(id)arg1;
- (int)maxSize;
- (void)setMaxSize:(int)arg1;

@end
