
@interface UPEmbedding : NSObject {
    void * _embedding;
}

- (void)dealloc;
- (id)description;
- (id)getCoordinates;
- (unsigned long long)getDimension;
- (id)initWithCoordinates:(id)arg1;
- (id)initWithProtobufEmbeddings:(id)arg1 forTokenAt:(int)arg2 error:(id*)arg3;

@end
