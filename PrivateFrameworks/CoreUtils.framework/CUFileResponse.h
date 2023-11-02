
@interface CUFileResponse : NSObject <CUDictionaryCodable> {
    NSArray * _fileItems;
    unsigned int  _flags;
}

@property (nonatomic, copy) NSArray *fileItems;
@property (nonatomic) unsigned int flags;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithDictionary:(id)arg1;
- (id)fileItems;
- (unsigned int)flags;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (void)setFileItems:(id)arg1;
- (void)setFlags:(unsigned int)arg1;

@end
