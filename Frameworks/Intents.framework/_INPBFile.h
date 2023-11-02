
@interface _INPBFile : PBCodable <NSCopying, NSSecureCoding, _INPBFile> {
    NSData * _bookmarkData;
    NSData * _data;
    _INPBURLValue * _fileURL;
    NSString * _filename;
    struct { 
        unsigned int removedOnCompletion : 1; 
    }  _has;
    bool  _removedOnCompletion;
    NSString * _typeIdentifier;
}

@property (nonatomic, copy) NSData *bookmarkData;
@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBURLValue *fileURL;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, readonly) bool hasBookmarkData;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasFileURL;
@property (nonatomic, readonly) bool hasFilename;
@property (nonatomic) bool hasRemovedOnCompletion;
@property (nonatomic, readonly) bool hasTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool removedOnCompletion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarkData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)filename;
- (bool)hasBookmarkData;
- (bool)hasData;
- (bool)hasFileURL;
- (bool)hasFilename;
- (bool)hasRemovedOnCompletion;
- (bool)hasTypeIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)removedOnCompletion;
- (void)setBookmarkData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setHasRemovedOnCompletion:(bool)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (id)typeIdentifier;
- (void)writeTo:(id)arg1;

@end
