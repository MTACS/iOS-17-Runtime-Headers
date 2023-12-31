
@protocol CMMapperRoot

@required

- (CMArchiveManager *)archiver;
- (OADBlip *)blipAtIndex:(unsigned int)arg1;
- (NSString *)documentTitle;
- (struct CGSize { double x1; double x2; })pageSizeForDevice;

@end
