
@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding> {
    NSData * _fetchData;
    long long  _resultType;
    bool  _secure;
}

@property (nonatomic, readonly, retain) NSData *fetchData;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) bool secure;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchData;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)resultType;
- (bool)secure;

@end
