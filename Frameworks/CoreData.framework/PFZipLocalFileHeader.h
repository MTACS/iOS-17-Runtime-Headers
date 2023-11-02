
@interface PFZipLocalFileHeader : NSObject {
    unsigned int  _compressedSize;
    unsigned short  _compressionMethod;
    unsigned int  _crc32;
    NSData * _extraFieldData;
    unsigned short  _extraFieldLength;
    NSString * _filename;
    unsigned short  _filenameLength;
    unsigned short  _generalPurposeBit;
    unsigned short  _lastModDate;
    unsigned short  _lastModTime;
    unsigned int  _uncompressedSize;
    unsigned short  _versionNeededToExtract;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
