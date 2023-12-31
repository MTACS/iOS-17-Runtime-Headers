
@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {
    int  _maxSize;
}

@property (nonatomic) int maxSize;

- (id)description;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2;
- (bool)isEqual:(id)arg1;
- (int)maxSize;
- (void)setMaxSize:(int)arg1;

@end
