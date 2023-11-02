
@interface BMDKEventCodec : NSObject {
    bool  _decodeMetadata;
}

@property (nonatomic) bool decodeMetadata;

+ (id)codecWithVersion:(unsigned int)arg1;

- (bool)decodeMetadata;
- (id)decodeWithProto:(id)arg1;
- (id)decodeWithProtoData:(id)arg1;
- (id)encodeAsProto:(id)arg1;
- (id)encodeAsProtoData:(id)arg1;
- (id)init;
- (void)setDecodeMetadata:(bool)arg1;

@end
