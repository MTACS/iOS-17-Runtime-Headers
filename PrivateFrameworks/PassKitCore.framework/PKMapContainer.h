
@interface PKMapContainer : NSObject <NSSecureCoding> {
    NSMutableDictionary * _recipientMap;
    NSMutableDictionary * _scoreMap;
    long long  _version;
}

@property (nonatomic, readonly, copy) NSMutableDictionary *recipientMap;
@property (nonatomic, readonly, copy) NSMutableDictionary *scoreMap;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)recipientMap;
- (void)removeAllObjects;
- (id)scoreMap;
- (void)updateWithContainer:(id)arg1;
- (long long)version;

@end
