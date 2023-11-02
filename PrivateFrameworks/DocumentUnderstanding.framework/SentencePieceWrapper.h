
@interface SentencePieceWrapper : NSObject {
    void * sp;
}

- (id)decode:(id)arg1;
- (id)encode:(id)arg1;
- (id)encodingAndUTF8Spans:(const char *)arg1;
- (id)init;
- (bool)load:(id)arg1;

@end
