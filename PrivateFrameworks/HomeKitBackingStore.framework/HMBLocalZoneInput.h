
@interface HMBLocalZoneInput : HMFObject <HMFLogging> {
    HMBLocalSQLContextInputBlock * _inputBlock;
    HMBLocalZone * _localZone;
    unsigned long long  _stagedChangesCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalSQLContextInputBlock *inputBlock;
@property (readonly) HMBLocalZone *localZone;
@property unsigned long long stagedChangesCount;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)abort;
- (id)attributeDescriptions;
- (id)commitWithOptions:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithLocalZone:(id)arg1 inputBlock:(id)arg2;
- (id)inputBlock;
- (id)localZone;
- (id)logIdentifier;
- (void)setStagedChangesCount:(unsigned long long)arg1;
- (bool)stageRemovalForModelWithID:(id)arg1 error:(id*)arg2;
- (unsigned long long)stagedChangesCount;

@end
