
@interface DEMultipartWriter : NSObject <DEWriter> {
    bool  _partClosed;
    NSObject<DEWriter> * _writer;
}

@property (nonatomic) bool partClosed;
@property (nonatomic, retain) NSObject<DEWriter> *writer;

- (void).cxx_destruct;
- (void)close;
- (void)closeMessage;
- (void)dealloc;
- (id)init;
- (id)initWithWriter:(id)arg1;
- (void)newPart;
- (bool)partClosed;
- (void)setPartClosed:(bool)arg1;
- (void)setWriter:(id)arg1;
- (void)writeData:(id)arg1;
- (id)writer;

@end
