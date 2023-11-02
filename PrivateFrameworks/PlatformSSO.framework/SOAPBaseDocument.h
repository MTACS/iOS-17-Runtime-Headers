
@interface SOAPBaseDocument : NSObject

@property (nonatomic, readonly, copy) NSData *XMLData;
@property (nonatomic, readonly, copy) NSString *XMLString;

- (id)XMLData;
- (id)XMLDataWithOptions:(unsigned long long)arg1;
- (id)XMLString;
- (id)XMLStringWithOptions:(unsigned long long)arg1;

@end
