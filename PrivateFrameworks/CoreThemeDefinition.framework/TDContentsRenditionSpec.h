
@interface TDContentsRenditionSpec : TDRenditionSpec

@property (nonatomic, retain) NSSet *contains;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
