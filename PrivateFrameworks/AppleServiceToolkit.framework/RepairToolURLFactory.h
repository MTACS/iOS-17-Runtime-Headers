
@interface RepairToolURLFactory : NSObject <NSURLRequestFactory> {
    int  _currentIndex;
    NSString * _encryptionKey;
    NSArray * _requestItems;
}

@property (nonatomic) int currentIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *encryptionKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *requestItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)currentIndex;
- (id)encryptionKey;
- (id)initWithRequestItems:(id)arg1;
- (id)requestItems;
- (void)setCurrentIndex:(int)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setRequestItems:(id)arg1;
- (id)urlRequest;

@end
