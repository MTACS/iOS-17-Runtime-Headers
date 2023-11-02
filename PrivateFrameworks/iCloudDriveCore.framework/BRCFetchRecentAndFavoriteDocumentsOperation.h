
@interface BRCFetchRecentAndFavoriteDocumentsOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone * _serverZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performQueryOperationForBit:(unsigned int)arg1 index:(id)arg2 completion:(id /* block */)arg3;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
