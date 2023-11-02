
@interface PBMessageStreamWriter : NSObject {
    NSOutputStream * _stream;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)arg1;
- (bool)writeMessage:(id)arg1;

@end
