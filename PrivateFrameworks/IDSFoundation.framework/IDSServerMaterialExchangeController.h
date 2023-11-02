
@interface IDSServerMaterialExchangeController : NSObject {
    NSMutableSet * _currentlySentMaterials;
    <IDSServerMaterialExchangeDelegate> * _delegate;
    NSSet * _desiredMaterials;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needsUpdate;
    NSString * _sessionID;
    id /* block */  _signDataBlock;
}

@property (readonly) <IDSServerMaterialExchangeDelegate> *delegate;
@property (readonly) NSString *sessionID;

- (void).cxx_destruct;
- (id)_buildMaterialInfoForDesiredMaterialDataNoSignature:(id)arg1 materialType:(int)arg2 materialID:(id)arg3 sessionID:(id)arg4;
- (id)_buildMaterialInfoForDesiredMaterialDataRequireSignature:(id)arg1 materialType:(int)arg2 materialID:(id)arg3 sessionID:(id)arg4;
- (id)buildMaterialInfoForDesiredMaterialData:(id)arg1 materialType:(int)arg2 materialID:(id)arg3 sessionID:(id)arg4 requireSign:(bool)arg5;
- (id)currentlySentMaterials;
- (id)delegate;
- (id)desiredMaterials;
- (id)initWithDelegate:(id)arg1;
- (void)invalidateMaterialsInArray:(id)arg1;
- (void)invalidateMaterialsInSet:(id)arg1;
- (void)markMaterialsInArrayAsSent:(id)arg1;
- (void)markMaterialsInSetAsSent:(id)arg1;
- (id)materialProtosForDesiredMaterials:(id)arg1 failures:(id)arg2;
- (id)pendingMaterials;
- (id)sessionID;
- (void)setDesiredMaterialsForSession:(id)arg1 materials:(id)arg2 signer:(id /* block */)arg3;
- (void)setNeedsUpdate;
- (void)update;

@end
