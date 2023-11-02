
@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest {
    NSSet * _objectIDsToSerialize;
    unsigned long long  _resultType;
}

@property (nonatomic, copy) NSSet *objectIDsToSerialize;
@property (nonatomic) unsigned long long resultType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)objectIDsToSerialize;
- (unsigned long long)resultType;
- (void)setObjectIDsToSerialize:(id)arg1;
- (void)setResultType:(unsigned long long)arg1;

@end
