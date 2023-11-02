
@interface HMDDataStreamFragmentChunk : HMFObject <NSCopying> {
    NSData * _data;
    NSNumber * _fragmentSequenceNumber;
    bool  _last;
    NSNumber * _sequenceNumber;
    NSString * _type;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSNumber *fragmentSequenceNumber;
@property (getter=isLast, readonly) bool last;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (id)fragmentSequenceNumber;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 sequenceNumber:(id)arg2 fragmentSequenceNumber:(id)arg3 type:(id)arg4 isLast:(bool)arg5;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLast;
- (id)sequenceNumber;
- (id)type;

@end
