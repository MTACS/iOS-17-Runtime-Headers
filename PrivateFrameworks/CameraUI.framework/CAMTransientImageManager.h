
@interface CAMTransientImageManager : NSObject <PUTransientImageManager> {
    NSMutableDictionary * __activeRequestsByPairedUUID;
    NSMutableDictionary * __pairedVideosByPairedUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *_activeRequestsByPairedUUID;
@property (nonatomic, readonly) NSMutableDictionary *_pairedVideosByPairedUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeRequestsByPairedUUID;
- (void)_handleRequestTimeout:(id)arg1;
- (id)_pairedVideosByPairedUUID;
- (id)existingPairedVideoForUUID:(id)arg1;
- (id)existingPairedVideoUUIDs;
- (id)init;
- (id)insertPairedVideoWithConvertible:(id)arg1 filterType:(long long)arg2;
- (bool)isEmpty;
- (void)removePairedVideoForUUID:(id)arg1;
- (void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(id /* block */)arg2;

@end
