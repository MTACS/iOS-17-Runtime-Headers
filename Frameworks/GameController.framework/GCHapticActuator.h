
@interface GCHapticActuator : NSObject <GCJSONRepresentable, NSCopying, NSSecureCoding> {
    unsigned long long  _index;
    NSString * _label;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long index;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionaryRepresentation:(id)arg1;
- (id)initWithLabel:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3;
- (id)jsonDictionaryRepresentation;
- (id)label;
- (void)setIndex:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
