
@interface NMSPBMapping : NSObject {
    Class  _requestClass;
    Class  _responseClass;
}

@property (nonatomic, retain) Class requestClass;
@property (nonatomic, retain) Class responseClass;

- (void).cxx_destruct;
- (id)description;
- (Class)requestClass;
- (Class)responseClass;
- (void)setRequestClass:(Class)arg1;
- (void)setResponseClass:(Class)arg1;

@end
