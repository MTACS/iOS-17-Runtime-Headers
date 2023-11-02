
@interface PCSupportRequester : APXPCActionRequester

+ (bool)canShareConnection;
+ (id)machService;

- (void)addClientToSegments:(id)arg1 replaceExisting:(bool)arg2 privateSegment:(bool)arg3;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)fetchConfigurationForClass:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchGenderAndAgeGroupData;
- (void)fetchGenderAndAgeGroupData:(id /* block */)arg1;
- (id)init;
- (void)policiesForContainerType:(id)arg1 adType:(id)arg2 adFormatType:(id)arg3 completion:(id /* block */)arg4;
- (void)policiesToEnforce:(id /* block */)arg1;
- (id)remoteObjectInterface;

@end
