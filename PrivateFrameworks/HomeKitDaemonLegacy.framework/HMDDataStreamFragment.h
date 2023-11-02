
@interface HMDDataStreamFragment : HMFObject <NSCopying> {
    NSData * _data;
    NSNumber * _sequenceNumber;
    NSString * _type;
}

@property (readonly, copy) NSData *data;
@property (getter=isInitial, readonly) bool initial;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 sequenceNumber:(id)arg2 type:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isInitial;
- (id)sequenceNumber;
- (id)type;

@end
