
@interface TKSmartCardATR : NSObject {
    NSData * _bytes;
    NSData * _historicalBytes;
    NSMutableArray * _interfaces;
}

@property (nonatomic, readonly) NSData *bytes;
@property (nonatomic, readonly) NSData *historicalBytes;
@property (nonatomic, readonly) NSArray *historicalRecords;
@property (nonatomic, readonly) NSArray *protocols;

- (void).cxx_destruct;
- (id)_formatHexData:(id)arg1 to:(id)arg2;
- (id)bytes;
- (id)description;
- (id)historicalBytes;
- (id)historicalRecords;
- (id)initWithBytes:(id)arg1;
- (id)initWithSource:(id /* block */)arg1;
- (id)interfaceGroupAtIndex:(long long)arg1;
- (id)interfaceGroupForProtocol:(unsigned long long)arg1;
- (id)parseFromSource:(id /* block */)arg1;
- (id)protocols;

@end
