
@interface IMNicknameEncryptionTag : NSObject {
    NSData * _dataRepresentation;
}

@property (nonatomic, retain) NSData *dataRepresentation;
@property (nonatomic, readonly) NSString *stringRepresentation;

+ (id)_tagWithDataRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
+ (id)_tagWithStringRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDataRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTag:(id)arg1 error:(id*)arg2;
- (void)setDataRepresentation:(id)arg1;
- (id)stringRepresentation;

@end
