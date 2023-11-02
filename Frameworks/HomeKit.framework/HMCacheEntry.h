
@interface HMCacheEntry : HMFObject <NSSecureCoding> {
    NSData * _data;
    NSDate * _lastModificationDate;
}

@property (readonly, copy) NSData *data;
@property (readonly) bool isExpired;
@property (readonly, copy) NSDate *lastModificationDate;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 lastModificationDate:(id)arg2;
- (bool)isExpired;
- (id)lastModificationDate;

@end
