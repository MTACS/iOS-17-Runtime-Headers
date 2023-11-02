
@interface BUZipEntry : NSObject {
    unsigned int  _CRC;
    NSString * _collapsedName;
    bool  _compressed;
    unsigned long long  _compressedSize;
    unsigned int  _externalFileAttributes;
    unsigned short  _extraFieldsLength;
    unsigned long long  _fileHeaderLength;
    NSDate * _lastModificationDate;
    NSString * _name;
    unsigned short  _nameLength;
    unsigned long long  _offset;
    unsigned long long  _size;
}

@property (nonatomic) unsigned int CRC;
@property (nonatomic, copy) NSString *collapsedName;
@property (getter=isCompressed, nonatomic) bool compressed;
@property (nonatomic) unsigned long long compressedSize;
@property (nonatomic) unsigned int externalFileAttributes;
@property (nonatomic) unsigned short extraFieldsLength;
@property (nonatomic) unsigned long long fileHeaderLength;
@property (nonatomic, copy) NSDate *lastModificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned short nameLength;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long size;
@property (getter=isSymLink, nonatomic, readonly) bool symLink;

- (void).cxx_destruct;
- (unsigned int)CRC;
- (void)_beginStreamingWriteForArchive:(id)arg1 forDestinationURL:(id)arg2 completion:(id /* block */)arg3;
- (id)_dataFromArchive:(id)arg1 error:(id*)arg2;
- (id)_extractFromArchiveData:(id)arg1 destinationURL:(id)arg2 allowEntriesOutsideRoot:(bool)arg3 error:(id*)arg4;
- (id)collapsedName;
- (unsigned long long)compressedSize;
- (id)dataFromArchive:(id)arg1;
- (id)description;
- (unsigned int)externalFileAttributes;
- (unsigned short)extraFieldsLength;
- (id)extractFromArchive:(id)arg1;
- (bool)extractFromArchive:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3;
- (unsigned long long)fileHeaderLength;
- (bool)isCompressed;
- (bool)isSymLink;
- (id)lastModificationDate;
- (id)name;
- (unsigned short)nameLength;
- (unsigned long long)offset;
- (id)plistFromArchive:(id)arg1;
- (void)setCRC:(unsigned int)arg1;
- (void)setCollapsedName:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setCompressedSize:(unsigned long long)arg1;
- (void)setExternalFileAttributes:(unsigned int)arg1;
- (void)setExtraFieldsLength:(unsigned short)arg1;
- (void)setFileHeaderLength:(unsigned long long)arg1;
- (void)setLastModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameLength:(unsigned short)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)stringFromArchive:(id)arg1;
- (id)usableName;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)xmlDocumentFromArchive:(id)arg1;

@end
