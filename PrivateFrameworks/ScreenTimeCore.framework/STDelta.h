
@interface STDelta : NSObject {
    long long  _changeType;
    NSDictionary * _dictionary;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (long long)changeType;
- (void)changedWithDictionary:(id)arg1;
- (void)deleted;
- (id)dictionary;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)uniqueIdentifier;

@end
