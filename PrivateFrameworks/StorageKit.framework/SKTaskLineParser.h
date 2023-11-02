
@interface SKTaskLineParser : NSObject <SKTaskDataParser> {
    NSMutableData * _buffer;
    id /* block */  _callback;
}

@property (retain) NSMutableData *buffer;
@property (copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)lineData;

- (void).cxx_destruct;
- (id)buffer;
- (id /* block */)callback;
- (id)initWithCallback:(id /* block */)arg1;
- (void)parseData:(id)arg1;
- (void)setBuffer:(id)arg1;
- (void)setCallback:(id /* block */)arg1;

@end
