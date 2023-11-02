
@interface FMFMapCacheImage : NSObject <NSSecureCoding> {
    long long  _count;
    NSString * _path;
    NSDate * _timestamp;
}

@property (nonatomic) long long count;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)boostPriority;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setCount:(long long)arg1;
- (void)setPath:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
