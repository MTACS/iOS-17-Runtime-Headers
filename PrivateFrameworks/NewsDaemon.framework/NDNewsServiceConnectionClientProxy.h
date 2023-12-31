
@interface NDNewsServiceConnectionClientProxy : NSObject <NDNewsServiceClient> {
    <NDNewsServiceClient> * _client;
}

@property (nonatomic) <NDNewsServiceClient> *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (void)serviceHasNewTodayResults;
- (void)setClient:(id)arg1;

@end
