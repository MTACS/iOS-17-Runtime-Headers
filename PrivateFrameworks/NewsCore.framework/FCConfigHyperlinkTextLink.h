
@interface FCConfigHyperlinkTextLink : NSObject {
    long long  _rangeLength;
    long long  _rangeStart;
    NSString * _url;
}

@property (nonatomic, readonly) long long rangeLength;
@property (nonatomic, readonly) long long rangeStart;
@property (nonatomic, readonly, copy) NSString *url;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithURL:(id)arg1 rangeStart:(long long)arg2 rangeLength:(long long)arg3;
- (long long)rangeLength;
- (long long)rangeStart;
- (id)url;

@end
