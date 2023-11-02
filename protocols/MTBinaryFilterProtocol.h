
@protocol MTBinaryFilterProtocol <NSObject>

@required

- (void)filterFrame:(void *)arg1 size:(void *)arg2 maxSize:(void *)arg3 extraFrame:(void *)arg4; // needs 4 arg types, found 11: char **, unsigned int*, unsigned int*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, char *, unsigned int, unsigned int, void*
- (unsigned int)maxFrameSize;
- (void)reset;

@optional

- (id)initWithInfo:(NSDictionary *)arg1;
- (id)initWithInfo:(void *)arg1 getProperty:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSData *, id /* block */, NSString *, void*
- (void)setProperty:(NSString *)arg1 withValue:(id)arg2;

@end
