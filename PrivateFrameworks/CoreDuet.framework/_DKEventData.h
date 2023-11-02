
@interface _DKEventData : NSObject {
    NSData * _event;
    unsigned long long  _uncompressedLength;
    unsigned long long  _version;
}

+ (id)fromPBCodable:(id)arg1;

- (void).cxx_destruct;
- (id)toPBCodable;

@end
