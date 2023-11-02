
@interface WFContentItemCache : NSObject <NSSecureCoding> {
    NSMapTable * _cache;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, readonly) NSMapTable *cache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addContentCollection:(id)arg1;
- (id)cache;
- (void)clear;
- (id)contentItemForUUID:(id)arg1;
- (void)deleteContentCollection:(id)arg1;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCache:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
