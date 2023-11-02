
@interface RS3DMarker : NSObject {
    void _normal;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*corners[4]; 
    }  _quad;
    float  _score;
}

@property (nonatomic, readonly) void normal;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } quad;
@property (nonatomic, readonly) float score;

- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)normal;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })quad;
- (float)score;

@end
