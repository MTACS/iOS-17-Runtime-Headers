
@interface BLPurchaseDAAPParser : NSObject

+ (id)decodeData:(id)arg1;
+ (id)decodeHexString:(id)arg1;
+ (id)sharedInstance;
+ (id)typeForDRCPValueType:(long long)arg1;

- (unsigned long long)SwapInt64BigToHost:(const char *)arg1 size:(long long)arg2;
- (id)parseBookletItem:(const char *)arg1 count:(long long)arg2;
- (id)parseBookletListing:(const char *)arg1 count:(long long)arg2;
- (id)parseBrowseResults:(const char *)arg1 count:(long long)arg2;
- (id)parseContentCodes:(const char *)arg1 count:(long long)arg2;
- (id)parseControlPromptCollection:(const char *)arg1 count:(long long)arg2;
- (id)parseControlPromptResponse:(const char *)arg1 count:(long long)arg2;
- (id)parseDACPPropertyResponse:(const char *)arg1 count:(long long)arg2;
- (id)parseDeletedIDsList:(const char *)arg1 count:(long long)arg2;
- (void)parseDict:(const char *)arg1 size:(long long)arg2 intoDict:(id)arg3;
- (id)parseError:(const char *)arg1 count:(long long)arg2;
- (id)parseGetSpeakersResponse:(const char *)arg1 count:(long long)arg2;
- (id)parseListingCollection:(const char *)arg1 count:(long long)arg2 capacity:(int)arg3;
- (id)parseListingHeader:(const char *)arg1 count:(long long)arg2;
- (id)parseListingItem:(const char *)arg1 count:(long long)arg2;
- (id)parseLogin:(const char *)arg1 count:(long long)arg2;
- (id)parseMACAddressListing:(const char *)arg1 count:(long long)arg2;
- (id)parseServerInfo:(const char *)arg1 count:(long long)arg2;
- (id)parseUTF8String:(const char *)arg1 length:(long long)arg2;
- (id)parseUnicodeCharacter:(const char *)arg1 count:(long long)arg2;
- (id)processFlavor:(const char *)arg1 size:(long long)arg2;
- (id)processFlavors:(const char *)arg1 size:(long long)arg2;
- (id)processResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 count:(long long)arg3;
- (id)processXMLContent:(const char *)arg1 count:(long long)arg2;
- (void)setBool:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setDate:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setFloat32:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setSInt16:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setSInt8:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setString:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt16:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt32:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt64:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt8:(const char *)arg1 size:(long long)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)unknownCode:(unsigned int)arg1 bytes:(const char *)arg2 size:(long long)arg3;

@end
