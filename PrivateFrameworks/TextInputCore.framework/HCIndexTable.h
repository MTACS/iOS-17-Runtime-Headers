
@interface HCIndexTable : NSObject {
    struct HCIndexTableFileHeader { unsigned int x1; unsigned short x2; unsigned char x3[16]; } * _fileHeader;
    NSData * _huffmanCodesMemoryMappedData;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _mutableHuffmanCodes;
    NSUUID * _versionUUID;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const struct HCIndexTableFileHeader { unsigned int x1; unsigned short x2; unsigned char x3[16]; }*fileHeader;
@property (nonatomic, readonly) const unsigned long long*huffmanCodes;
@property (nonatomic, readonly) NSData *huffmanCodesMemoryMappedData;
@property (nonatomic, readonly) bool isValid;
@property (readonly) NSUUID *versionUUID;

+ (id)indexTableFromFile:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)codeAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (const struct HCIndexTableFileHeader { unsigned int x1; unsigned short x2; unsigned char x3[16]; }*)fileHeader;
- (const unsigned long long*)huffmanCodes;
- (id)huffmanCodesMemoryMappedData;
- (id)init;
- (id)initWithHuffmanCodesMemoryMappedData:(id)arg1;
- (bool)isValid;
- (id)versionUUID;
- (bool)writeToFile:(id)arg1;

@end
