
@interface cRestrictionArray : NSObject {
    bool  _isPresent;
    NSObject<RestrictionProtocol> * _restriction;
}

@property (readonly) bool isPresent;
@property (retain) NSObject<RestrictionProtocol> *restriction;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)init;
- (id)initWithRestriction:(id)arg1;
- (bool)isPresent;
- (id)restriction;
- (void)setRestriction:(id)arg1;

@end
