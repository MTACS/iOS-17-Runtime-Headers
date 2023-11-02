
@interface TAOutgoingRequests : NSObject {
    NSDictionary * _additionalInformation;
    NSDate * _date;
    NSString * _key;
}

@property (nonatomic, readonly, copy) NSDictionary *additionalInformation;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSString *key;

- (void).cxx_destruct;
- (id)additionalInformation;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (id)initWithRequestKey:(id)arg1 additionalInformation:(id)arg2 date:(id)arg3;
- (id)key;

@end
