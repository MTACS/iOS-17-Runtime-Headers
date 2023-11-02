
@interface _NBMetadataHelper : NSObject {
    NSCache * _metadataCache;
}

@property (nonatomic, retain) NSCache *metadataCache;

+ (id)CCode2CNMap;
+ (id)CN2CCodeMap;
+ (id)countryCodeFromRegionCode:(id)arg1;
+ (bool)hasValue:(id)arg1;
+ (id)jsonObjectFromZippedDataWithBytes:(char *)arg1 compressedLength:(unsigned long long)arg2 expandedLength:(unsigned long long)arg3;
+ (id)phoneNumberDataMap;
+ (id)regionCodeFromCountryCode:(id)arg1;

- (void).cxx_destruct;
- (id)getAllMetadata;
- (id)getMetadataForNonGeographicalRegion:(id)arg1;
- (id)getMetadataForRegion:(id)arg1;
- (id)init;
- (id)metadataCache;
- (void)setMetadataCache:(id)arg1;

@end
