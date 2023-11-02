
@interface NBURLHasher : NSObject {
    NBObjCURLHasher * _hasher;
}

@property (nonatomic, readonly) NBObjCURLHasher *hasher;

- (void).cxx_destruct;
- (id)hashForURL:(id)arg1 maxLength:(unsigned long long)arg2;
- (id)hasher;
- (id)init;

@end
