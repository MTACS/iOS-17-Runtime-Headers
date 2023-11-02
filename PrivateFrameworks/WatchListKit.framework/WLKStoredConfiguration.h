
@interface WLKStoredConfiguration : NSObject {
    bool  _activeUser;
    NSDictionary * _requiredRequestKeyValuePairs;
    NSDate * _timestamp;
    NSString * _utsc;
    NSString * _vppaState;
}

@property (nonatomic) bool activeUser;
@property (nonatomic, retain) NSDictionary *requiredRequestKeyValuePairs;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *utsc;
@property (nonatomic, readonly) NSString *utsk;
@property (nonatomic, retain) NSString *vppaState;

- (void).cxx_destruct;
- (bool)activeUser;
- (id)description;
- (id)requiredRequestKeyValuePairs;
- (void)setActiveUser:(bool)arg1;
- (void)setRequiredRequestKeyValuePairs:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUtsc:(id)arg1;
- (void)setVppaState:(id)arg1;
- (id)timestamp;
- (id)utsc;
- (id)utsk;
- (id)vppaState;

@end
