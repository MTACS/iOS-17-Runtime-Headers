
@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying> {
    unsigned long long  _bytesLengthForExternalReference;
    unsigned long long  _bytesLengthForStore;
    void * _bytesPtrForExternalReference;
    void * _bytesPtrForStore;
    struct __externalDataFlags { 
        unsigned int _isStoredExternally : 1; 
        unsigned int _hasMappedData : 1; 
        unsigned int _cleanupOnDealloc : 1; 
        unsigned int _dataProtectionLevel : 3; 
        unsigned int _isStoredUbiquitously : 1; 
        unsigned int _createdByUbiquityImport : 1; 
        unsigned int _reserved : 24; 
    }  _externalDataFlags;
    NSString * _externalReferenceLocation;
    NSData * _originalData;
    NSString * _safeguardLocation;
    id  _ubiquitousLocation;
}

+ (Class)classForKeyedUnarchiver;

- (id)UUID;
- (unsigned long long)_bytesLengthForExternalReference;
- (unsigned long long)_bytesLengthForStore;
- (const void*)_bytesPtrForExternalReference;
- (const void*)_bytesPtrForStore;
- (bool)_createdByUbiquityImport;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (const char *)_externalReferenceLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (id)_originalData;
- (const char *)_safeguardLocation;
- (id)_safeguardLocationString;
- (void)_setBytesForExternalReference:(const void*)arg1;
- (void)_writeExternalReferenceToInterimLocation;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseValue;
- (void)dealloc;
- (id)description;
- (void)doCleanupOnDealloc;
- (id)externalReferenceLocationString;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasExternalReferenceContent;
- (id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4;
- (id)initForUbiquityDictionary:(id)arg1 store:(id)arg2;
- (id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5;
- (id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopy;
- (int)preferredProtectionLevel;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
