
@interface BMPersonName : NSObject <BMProtoBufWrapper> {
    NSString * _name;
    BMNameComponents * _nameComponents;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BMNameComponents *nameComponents;

- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)initWithName:(id)arg1 nameComponents:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nameComponents;
- (id)proto;

@end
