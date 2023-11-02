
@interface BRFieldXattrBlob : PBCodable <NSCopying> {
    NSMutableArray * _xattrs;
}

@property (nonatomic, retain) NSMutableArray *xattrs;

+ (bool)loadXattrsFromFD:(int)arg1 structuralBlob:(id*)arg2 contentBlob:(id*)arg3 localBlob:(id*)arg4 withMaximumSize:(unsigned long long)arg5 error:(id*)arg6;
+ (id)loadXattrsFromFD:(int)arg1 withMaximumSize:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)removeXattrsOnFD:(int)arg1 includingContentRelated:(bool)arg2 error:(id*)arg3;
+ (Class)xattrsType;

- (void).cxx_destruct;
- (void)addXattrs:(id)arg1;
- (bool)applyToFileDescriptor:(int)arg1 error:(id*)arg2;
- (void)clearXattrs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setXattrs:(id)arg1;
- (id)shortDescription;
- (void)writeTo:(id)arg1;
- (id)xattrs;
- (id)xattrsAtIndex:(unsigned long long)arg1;
- (unsigned long long)xattrsCount;

@end
