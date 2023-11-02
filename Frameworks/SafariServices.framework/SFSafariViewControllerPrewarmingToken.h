
@interface SFSafariViewControllerPrewarmingToken : NSObject <NSSecureCoding> {
    NSOrderedSet * _URLs;
    unsigned long long  _requestID;
    bool  _valid;
}

@property (nonatomic, readonly) NSOrderedSet *URLs;
@property (nonatomic, readonly) unsigned long long requestID;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLs;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLs:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (unsigned long long)requestID;

@end
