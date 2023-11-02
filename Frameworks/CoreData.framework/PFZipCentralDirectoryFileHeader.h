
@interface PFZipCentralDirectoryFileHeader : NSObject {
    unsigned int  _compressedSize;
    unsigned short  _compressionMethod;
    unsigned int  _crc32;
    unsigned int  _externalFileAttrs;
    NSData * _extraFieldData;
    unsigned short  _extraFieldLength;
    NSString * _fileComment;
    unsigned short  _fileCommentLength;
    unsigned short  _fileStartDiskNumber;
    NSString * _filename;
    unsigned short  _filenameLength;
    unsigned short  _generalPurposeBit;
    unsigned short  _internalFileAttrs;
    unsigned short  _lastModDate;
    unsigned short  _lastModTime;
    unsigned int  _localFileHeaderRelativeOffset;
    unsigned int  _uncompressedSize;
    unsigned short  _versionMadeBy;
    unsigned short  _versionNeededToExtract;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
