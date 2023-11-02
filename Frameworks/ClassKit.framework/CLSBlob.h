
@interface CLSBlob : CLSObject <CLSRelationable> {
    NSData * _data;
    int  _type;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 data:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (void)setData:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (bool)validateObject:(id*)arg1;

@end
