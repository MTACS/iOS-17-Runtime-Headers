
@interface MRUUpNextDataSource : NSObject {
    <MRUUpNextDataSourceDelegate> * _delegate;
    MPCPlayerResponse * _response;
    NSArray * _responseItemIDs;
    NSDictionary * _responseItemsByIdentifier;
}

@property (nonatomic) <MRUUpNextDataSourceDelegate> *delegate;
@property (nonatomic, retain) MPCPlayerResponse *response;
@property (nonatomic, readonly) NSArray *responseItemIDs;
@property (nonatomic, retain) NSDictionary *responseItemsByIdentifier;

- (void).cxx_destruct;
- (bool)canMoveResponseItemWithIdentifier:(id)arg1;
- (id)delegate;
- (id)init;
- (void)moveReponseItemToNextWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)moveReponseItemWithIdentifier:(id)arg1 afterResponseItemWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)playItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeResponseItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)response;
- (id)responseItemForIdentifier:(id)arg1;
- (id)responseItemIDs;
- (id)responseItemsByIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseItemsByIdentifier:(id)arg1;
- (void)updateContentItems;

@end
