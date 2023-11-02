
@protocol _SFPBCopyItem <NSObject>

@required

- (_SFPBContactCopyItem *)contactCopyItem;
- (_SFPBImageCopyItem *)imageCopyItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContactCopyItem:(_SFPBContactCopyItem *)arg1;
- (void)setImageCopyItem:(_SFPBImageCopyItem *)arg1;
- (void)setSpotlightCopyItem:(_SFPBCoreSpotlightCopyItem *)arg1;
- (void)setTextCopyItem:(_SFPBTextCopyItem *)arg1;
- (_SFPBCoreSpotlightCopyItem *)spotlightCopyItem;
- (_SFPBTextCopyItem *)textCopyItem;
- (unsigned long long)whichValue;

@end
