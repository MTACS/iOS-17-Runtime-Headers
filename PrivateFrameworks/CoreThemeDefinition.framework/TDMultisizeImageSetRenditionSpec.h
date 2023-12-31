
@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec

@property (nonatomic, retain) NSSet *multisizeImageRenditions;
@property (nonatomic, retain) TDMultisizeImageSetProduction *multisizeImageSetProduction;

- (bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
