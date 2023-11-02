
@interface SKTaskRawParser : NSObject <SKTaskDataParser> {
    id /* block */  _callback;
}

@property (copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)initWithCallback:(id /* block */)arg1;
- (void)parseData:(id)arg1;
- (void)setCallback:(id /* block */)arg1;

@end
