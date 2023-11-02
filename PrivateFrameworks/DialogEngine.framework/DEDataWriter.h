
@interface DEDataWriter : NSObject <DEWriter> {
    NSMutableData * _data;
}

@property (nonatomic, retain) NSMutableData *data;

- (void).cxx_destruct;
- (void)close;
- (id)data;
- (id)init;
- (void)setData:(id)arg1;
- (void)writeData:(id)arg1;

@end
