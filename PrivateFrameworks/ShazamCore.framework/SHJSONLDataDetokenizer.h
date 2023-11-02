
@interface SHJSONLDataDetokenizer : NSObject <SHDataStream> {
    NSMutableData * _currentData;
    <SHJSONLDataDetokenizerDelegate> * _delegate;
    <SHDataStream> * _next;
}

@property (nonatomic, retain) NSMutableData *currentData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHJSONLDataDetokenizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SHDataStream> *next;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)closeWithError:(id*)arg1;
- (id)currentData;
- (id)delegate;
- (id)init;
- (id)next;
- (bool)processData:(id)arg1 error:(id*)arg2;
- (void)setCurrentData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNext:(id)arg1;
- (bool)writeDataToDelegate:(id)arg1 withError:(id*)arg2;

@end
