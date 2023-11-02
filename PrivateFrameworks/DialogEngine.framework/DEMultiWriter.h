
@interface DEMultiWriter : NSObject <DEWriter> {
    NSMutableData * _data;
    NSArray * _writers;
}

@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, retain) NSArray *writers;

- (void).cxx_destruct;
- (void)close;
- (id)data;
- (id)init;
- (id)initWithWriters:(id)arg1;
- (void)setData:(id)arg1;
- (void)setWriters:(id)arg1;
- (void)writeData:(id)arg1;
- (id)writers;

@end
