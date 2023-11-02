
@interface UARPSuperBinaryAssetPayload : NSObject {
    bool  _allowCompressionHeaders;
    UARPAssetVersion * _assetVersion;
    unsigned int  _blockSize;
    NSMutableArray * _composeTLVs;
    NSURL * _compressedPayloadURL;
    int  _compression;
    unsigned int  _compressionHeaderIndex;
    NSMutableData * _compressionHeaders;
    NSDictionary * _dict;
    unsigned long long  _formatVersion;
    NSString * _friendlyName;
    bool  _isWritable;
    NSObject<OS_os_log> * _log;
    NSMutableData * _metaData;
    NSData * _payload;
    struct UARPPayloadHeader { 
        unsigned int payloadHeaderLength; 
        unsigned int payloadTag; 
        struct UARPVersion { 
            unsigned int major; 
            unsigned int minor; 
            unsigned int release; 
            unsigned int build; 
        } payloadVersion; 
        unsigned int payloadMetadataOffset; 
        unsigned int payloadMetadataLength; 
        unsigned int payloadOffset; 
        unsigned int payloadLength; 
    }  _payloadHeader;
    UARPAssetTag * _payloadTag;
    NSURL * _superBinaryURL;
    NSString * _tag;
    NSMutableArray * _tlvs;
    struct UARPVersion { 
        unsigned int major; 
        unsigned int minor; 
        unsigned int release; 
        unsigned int build; 
    }  _uarpVersion;
    NSURL * _url;
}

@property (readonly) bool allowCompressionHeaders;
@property (readonly) unsigned long long compressionHeaderIndex;
@property (readonly, copy) NSData *compressionHeaders;
@property (readonly) unsigned long long formatVersion;
@property (readonly) NSData *metaData;
@property (readonly) bool needsCompression;
@property (readonly, copy) NSData *payload;
@property (readonly) UARPAssetTag *payloadTag;
@property (readonly) NSArray *tlvs;

- (void).cxx_destruct;
- (void)addMetaDataTLV:(id)arg1;
- (void)addMetaDataTLVs:(id)arg1;
- (bool)allowCompressionHeaders;
- (bool)appendCompressedPayloadToFile:(id)arg1 error:(out id*)arg2;
- (bool)appendPayloadToFile:(id)arg1 bytesWritten:(unsigned long long*)arg2 error:(id*)arg3;
- (id)compressPayloadChunk:(id)arg1 offset:(unsigned int)arg2 error:(id*)arg3;
- (bool)compressPayloadURLToFileHandle:(id)arg1 error:(id*)arg2;
- (unsigned long long)compressionHeaderIndex;
- (id)compressionHeaders;
- (id)description;
- (bool)expandDictionaryWithPayloadsFolder:(id)arg1 metaDataTable:(id)arg2 error:(id*)arg3;
- (bool)expandPayloadToURL:(id)arg1 payloadFilename:(id)arg2 superbinary:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 error:(id*)arg6;
- (bool)expandPayloadToURL:(id)arg1 superbinary:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 error:(id*)arg5;
- (unsigned long long)formatVersion;
- (id)hashMetaData;
- (id)hashMetaDataWithAlgorithm:(int)arg1 error:(id*)arg2;
- (id)hashPayloadWithAlgorithm:(int)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPayloadHeader:(struct UARPPayloadHeader { unsigned int x1; unsigned int x2; struct UARPVersion { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1;
- (id)initWithPayloadTag:(id)arg1 assetVersion:(id)arg2;
- (id)initWithPayloadTag:(id)arg1 assetVersion:(id)arg2 writable:(bool)arg3;
- (id)initWithPayloadTag:(id)arg1 majorVersion:(unsigned long long)arg2 minorVersion:(unsigned long long)arg3 releaseVersion:(unsigned long long)arg4 buildVersion:(unsigned long long)arg5;
- (id)initWithTag:(id)arg1 majorVersion:(id)arg2 minorVersion:(id)arg3 releaseVersion:(id)arg4 buildVersion:(id)arg5;
- (id)metaData;
- (bool)needsCompression;
- (bool)parseFromPlistPayloadMetaDataTLVs:(id)arg1 payloadsURL:(id)arg2 error:(id*)arg3;
- (bool)parseFromPlistVersion:(id*)arg1;
- (id)payload;
- (id)payloadTag;
- (id)prepareData;
- (id)prepareMetaData;
- (unsigned long long)preparePackedTag;
- (bool)prepareUarpVersion:(struct UARPVersion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (unsigned long long)preparedDataLength;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeMetadata;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangePayload;
- (bool)setPayloadToContentsOfFile:(id)arg1 friendlyName:(id)arg2 error:(id*)arg3;
- (bool)setPayloadToContentsOfURL:(id)arg1 friendlyName:(id)arg2;
- (bool)setPayloadToData:(id)arg1;
- (void)setSuperBinaryURL:(id)arg1;
- (id)tlvs;
- (unsigned long long)unpreparedDataLength;
- (bool)updateFormatVersion:(unsigned long long)arg1;
- (bool)writePayloadData:(id)arg1 offset:(unsigned long long)arg2 error:(out id*)arg3;

@end
