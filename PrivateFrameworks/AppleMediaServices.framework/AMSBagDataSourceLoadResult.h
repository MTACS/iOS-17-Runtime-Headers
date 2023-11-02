
@interface AMSBagDataSourceLoadResult : NSObject {
    NSDictionary * _data;
    NSDate * _expirationDate;
    NSString * _loadedBagIdentifier;
    NSString * _loadedBagPartialIdentifier;
}

@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *loadedBagIdentifier;
@property (nonatomic, readonly) NSString *loadedBagPartialIdentifier;

- (void).cxx_destruct;
- (id)data;
- (id)expirationDate;
- (id)initWithData:(id)arg1 expirationDate:(id)arg2 loadedBagIdentifier:(id)arg3 loadedBagPartialIdentifier:(id)arg4;
- (id)loadedBagIdentifier;
- (id)loadedBagPartialIdentifier;

@end
