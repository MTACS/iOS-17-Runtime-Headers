
@interface MKHTTPContentRange : NSObject {
    long long  _length;
    long long  _offset;
    long long  _total;
}

@property (nonatomic) long long length;
@property (nonatomic) long long offset;
@property (nonatomic) long long total;

- (id)initWithHeaderValue:(id)arg1;
- (long long)length;
- (long long)offset;
- (void)setLength:(long long)arg1;
- (void)setOffset:(long long)arg1;
- (void)setTotal:(long long)arg1;
- (long long)total;

@end
