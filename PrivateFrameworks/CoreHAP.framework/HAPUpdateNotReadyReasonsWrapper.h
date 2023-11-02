
@interface HAPUpdateNotReadyReasonsWrapper : NSObject <HAPTLVProtocol, NSCopying> {
    unsigned long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long value;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithValue:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setValue:(unsigned long long)arg1;
- (unsigned long long)value;

@end
