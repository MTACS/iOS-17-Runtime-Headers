
@interface MSUDataAccessorRestore : MSUDataAccessor

- (id)copyMountPointForVolumeType:(int)arg1 error:(id*)arg2;
- (id)copyPathForPersonalizedData:(int)arg1 error:(id*)arg2;
- (id)findVolumesWithRole:(int)arg1;
- (id)getVolumeWithUUID:(id)arg1;
- (id)specialCaseAPTicketForRamdiskWithError:(id*)arg1;

@end
